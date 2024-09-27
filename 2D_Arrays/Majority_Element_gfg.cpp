// Majority Element in an array --> GeeksForGeeks Problem.
// Problem Link :- https://www.geeksforgeeks.org/problems/majority-element-1587115620/1


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate, count=0;
        for(int i=0;i<n;i++){
            if(count == 0){
                count = 1;
                candidate = nums[i];
            }
            else{
                if(candidate == nums[i]){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        // Verification Part
        
        count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == candidate){
                count++;
            }
        }
        if(count>n/2){
            return candidate;
        }
        else{
            return -1;
        }
};
int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout<<ans;
    return 0;
};