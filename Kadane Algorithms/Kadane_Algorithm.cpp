// Optimize Approach for the Subarray Sum By Kadane's Algorithm.

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

long long maxSubarraySum(vector<int> &arr){
        // code here...
        long long maximum = INT_MIN;
        long long prefix = 0;
        for(int i=0;i<arr.size();i++){
            prefix += arr[i];
            if(maximum<prefix){
            maximum = prefix;
        }
            if(prefix < 0){
            prefix = 0;
        }
        }
        return maximum;
};

int main(){
    vector<int>arr = {1,2,3,-2,5};
    int ans = maxSubarraySum(arr);
    cout<<"The maximum sum for the Subarray is "<<ans<<endl;

    return 0;
};
