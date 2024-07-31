/* --> Trapping Rain Water --> Leetcode
https://leetcode.com/problems/trapping-rain-water/description/ */


// More Optimization Approach By Removing The Extra Spaces.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int trapping_rain_water(vector<int> &height){
        int maxi_right = 0;
        int maxi_left = 0;
        int maximum = height[0];
        int answer = 0;
        int index = 0;

        for(int i=1;i<height.size();i++){
            if(maximum < height[i]){
                maximum = height[i];
                index = i;
            }
        }

        for(int j=0;j<index;j++){
            if(maxi_right > height[j]){
                answer += maxi_right - height[j];
            }
            else{
                maxi_right = height[j];
            }
        }

        for(int k=height.size()-1;k>index;k--){
            if(maxi_left > height[k]){
                answer += maxi_right - height[k];
            }
            else{
                maxi_left = height[k];
            }
        }

        return answer;
};

int main(){
    vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trapping_rain_water(arr);
    cout<<"The Units of Water will Fill = "<<ans;

    return 0;
};
