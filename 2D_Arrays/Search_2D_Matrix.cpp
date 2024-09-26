// Search in 2D Array --> Leetcode Problem
// Problem Link --> https://leetcode.com/problems/search-a-2d-matrix/description/

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(),col=matrix[0].size();
        int start=0,end = (row*col)-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            int row_index = mid/col;
            int col_index = mid%col;
            if(matrix[row_index][col_index] == target){
                return true;
            }
            else if(matrix[row_index][col_index] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return false;
}

int main(){

    vector<vector<int>>matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int k = 30;
    int ans = searchMatrix(matrix,k);
    cout<<ans;
    return  0;
};