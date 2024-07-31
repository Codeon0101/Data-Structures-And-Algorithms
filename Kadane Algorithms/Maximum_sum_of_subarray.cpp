// Maximum Subarray Sum Bruteforce Approach.

#include<iostream>
#include<vector>
#include<limits.h>
#include<bits/stdc++.h>

using namespace std;

int subarray_sum(vector<int> &arr){
    int max = INT_MIN;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            if(max<sum){
                max = sum;
            }
        }
    }
    return max;
};

int main(){
    vector<int>arr = {-79,-68,-18,-58,25,52,-68,-30,6,10};
    int ans = subarray_sum(arr);
    cout<<ans<<endl;  
};
