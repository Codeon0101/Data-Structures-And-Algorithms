#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Prefix Sum

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>prefix(n);
    prefix[0] = nums[0];
    for(int j=1;j<n;j++){
        prefix[j]=nums[j]+prefix[j-1];
    }
    for(auto k:prefix){
        cout<<k<<" ";
    }
};
