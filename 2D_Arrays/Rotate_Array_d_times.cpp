// Rotate Array D time --> GeeksForGeeks Problem.
// Problem Link --> https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

#include<bits/stdc++.h>
using namespace std;


// Function to reverse elements of the array from start to end
void reverse_array(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array by d elements
void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    d %= n;  // Handle cases where d > n
    reverse_array(arr, 0, d-1);   // Reverse the first part
    reverse_array(arr, d, n-1);   // Reverse the second part
    reverse_array(arr, 0, n-1);   // Reverse the whole array
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int d = 2;
    
    // Rotate array by d positions
    rotateArr(nums, d);
    
    // Print the rotated array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
};