// Smallest sum contiguous subarray
/* https://www.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1?utm_source=
geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab */


#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int smallestSumSubarray(vector<int>& a){
      //Code here
      int minimum = INT_MAX;
      int prefix = 0;
      for(int i=0;i<a.size();i++){
          prefix += a[i];
          if(minimum>prefix){
              minimum = prefix;
          }
          if(prefix>0){
              prefix = 0;
          }
      }
      return minimum;
};

int main(){
    vector<int>arr = {3,-4, 2,-3,-1, 7,-5};
    int ans = smallestSumSubarray(arr);
    cout<<"The smallest sum for the Subarray is "<<ans<<endl;

    return 0;
};