// Maximum Difference Between Two Elements
// https://www.geeksforgeeks.org/maximum-difference-between-two-elements/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <climits>

using namespace std;

int maximum_difference(vector<int> &arr,int size){
    int suffix = arr[size-1];
    int maxi = INT_MIN;
    for(int i=size-2;i>=0;i--){
        if(suffix<arr[i]){
        suffix = arr[i];
        }
        int difference = suffix - arr[i];
        if(maxi<difference){
            maxi = difference;
        }
    }
    return maxi;
};

int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans = maximum_difference(arr,size);
    cout<<ans<<endl;
    return 0;
};