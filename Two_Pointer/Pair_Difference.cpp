// Pair Difference --> Interview Bit

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target for the sum "<<endl;
    cin>>target;
    int start = 0;
    int end = 1;
    sort(nums.begin(),nums.end());
    if(target<0){
        target = target*-1;
    }
    while (end<nums.size()) {
        int diff = nums[end] - nums[start];
        if (diff == target) {
            cout<<"Target Found "<<endl;
            break;
        } else if (diff < target) {
            end++;
        } else {
            start++;
        }
        if(start == end){
            end++;
        }
    }
};
