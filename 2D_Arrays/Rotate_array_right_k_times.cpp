// Rotating the array right by K times --> Leetcode Problem
// Problem Link --> https://leetcode.com/problems/rotate-array/

#include<bits/stdc++.h>
using namespace std;

void reverse_array(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
}

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        reverse_array(nums,0,(n-k)-1);
        reverse_array(nums,n-k,n-1);
        reverse_array(nums,0,n-1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    
    // Rotate array by d positions
    rotate(nums, d);
    
    // Print the rotated array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
};