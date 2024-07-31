/* --> Trapping Rain Water --> Leetcode
https://leetcode.com/problems/trapping-rain-water/description/ */

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int trapping_rain_water(vector<int> &height){
        vector<int>maximum_right;
        vector<int>maximum_left;
        int maxi_right = 0;
        int maxi_left = 0;
        int minimum = 0;
        int answer = 0;
        maximum_right.push_back(maxi_right);
        for(int i=0;i<height.size()-1;i++){
            if(maxi_right<height[i]){
                maxi_right = height[i];
                maximum_right.push_back(maxi_right);
            }
            else{
                maximum_right.push_back(maxi_right);
            }
        }
        maximum_left.push_back(maxi_left);
        for(int j=height.size()-2;j>=0;j--){
            if(maxi_left<height[j]){
                maxi_left = height[j];
                maximum_left.push_back(maxi_left);
            }
            else{
                maximum_left.push_back(maxi_left);
            }
        }
        reverse(maximum_left.rbegin(),maximum_left.rend());
        for(int k=0;k<height.size();k++){
            minimum = min(maximum_right[k],maximum_left[k]);
            int difference = minimum - height[k];
            if(difference<0){
                continue;
            }
            else{
                answer += difference;
            }
        }
        return answer;
};

int main(){
    vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trapping_rain_water(arr);
    cout<<"The Units of Water will Fill = "<<ans;
};
