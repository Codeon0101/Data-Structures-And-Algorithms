#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start = 0;
        int end = n-1;
        
        while(start<end){
            if(arr[start] == 0){
                start++;
            }
            else{
                if(arr[end] == 0){
                    swap(arr[start],arr[end]);
                    start++;
                    end--;
                }
                else{
                end--;
            }
            }
        }
        for(auto j:arr){
            cout<<j<<" ";
        }
        return 0;
};