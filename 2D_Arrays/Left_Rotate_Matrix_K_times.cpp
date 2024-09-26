// Left Rotate K times to a Matrix --> GeeksForGeeks Problem.
// Problem Link --> https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<vector<int>> &mat, int start, int end, int i){
    while(start<end){
        swap(mat[i][start],mat[i][end]);
        start++;
        end--;
    }
}
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        k = k%col;
        for(int i=0;i<row;i++){
            reverse(mat,0,k-1,i);
            reverse(mat,k,col-1,i);
            reverse(mat,0,col-1,i);
            
        }
        return mat;
    }

int main(){
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int k = 2;
    vector<vector<int>> ans = rotateMatrix(k,arr);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
};
