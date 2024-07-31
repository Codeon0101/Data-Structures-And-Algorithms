#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int start = 0;
int end = 0;
while(start <= end){
    if(nums.size() == end){
        break;
    }
    else if(nums[start] != 0 && nums[end] != 0){
        start++;
        end++;
    }
    else if(nums[start] == 0 && nums[end] != 0){
        swap(nums[start], nums[end]);
        start++;
        end++;
    }
    else{
        end++;
    }
}
for(int i:nums){
    cout<<i<<" ";
}
return 0;
};
