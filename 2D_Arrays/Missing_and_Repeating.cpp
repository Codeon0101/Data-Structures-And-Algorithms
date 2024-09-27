// Missing and repeating in an array --> GeeksForGeeks Problem.
// Problem Link :- https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,3,3};
    int n = arr.size();
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int j=0;j<n;j++){
        arr[arr[j]%n]+=n;
    }
    vector<int>ans(2);
    for(int k=0;k<n;k++){
        if(arr[k]/n == 2){
            ans[0] = k+1;
        }
        else if(arr[k]/n == 0){
            ans[1] = k+1;
        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
};