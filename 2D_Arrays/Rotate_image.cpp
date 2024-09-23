// Roatate Image by 90 degree:- (Leetcode Problem)
// Problem Link --> https://leetcode.com/problems/rotate-image/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = matrix.size()-1,col = matrix[0].size()-1;
    for(int i=0;i<=row;i++){
            for(int j=i+1;j<=col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int k=0;k<=row;k++){
            int start = 0;
            int end = col;
            while(start<=end){
                swap(matrix[k][start],matrix[k][end]);
                start++;
                end--;
            }
        }
        for(int i=0;i<=row;i++){
            for(int j=0;j<=col;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
};
