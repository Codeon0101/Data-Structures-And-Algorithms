// Frequencies of Limited Range Array Elements --> GeeksForGeeks Problem.
// Problem Link :- https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1?utm_source=geeksforgee


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        for(int i=0;i<N;i++)
        arr[i]--;
        
        for(int i=0;i<N;i++)
        {
            if(arr[i]%P<N)
            arr[arr[i]%P] += P;
        }
        
        for(int i=0;i<N;i++)
        arr[i] = arr[i]/P;
    };
int main(){
    vector<int> arr = {2, 3, 2, 3, 5};
    int N = 5;
    int P = 3;
    frequencyCount(arr,N,P);
    for(int i:arr)
    cout<<i<<" ";
    return 0;
};
