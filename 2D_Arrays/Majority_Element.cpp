// Majority Element in an array --> Leetcode Problem.
// Problem Link :- https://leetcode.com/problems/majority-element/


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
        return candidate;
};
int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout<<ans;
    return 0;
};