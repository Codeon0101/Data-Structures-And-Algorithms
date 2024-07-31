// Sorted order Two Sum Indices:-

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    vector<int>numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    int target;
    cout<<"Enter the target for the sum "<<endl;
    cin>>target;
    int start = 0;
    int end = n-1;
    vector<int>ans;
    while(start<end){
        if(numbers[start]+numbers[end] == target){
            ans.push_back(start+1);
            ans.push_back(end+1);
            break;
        }
        else if(numbers[start]+numbers[end] > target){
            end--;
        }
        else{
            start++;
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
};
