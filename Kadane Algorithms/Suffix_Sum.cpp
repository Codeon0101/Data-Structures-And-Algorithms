#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Suffix Sum

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>suffix(n);
    suffix[n-1] = nums[n-1];
    for(auto j = n-2;j>=0;j--){
        suffix[j] = nums[j] + suffix[j+1];
    }
    for(int k=0;k<suffix.size();k++){
        cout<<suffix[k]<<" ";
    }
};
