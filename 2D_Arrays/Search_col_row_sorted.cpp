// Search in a row-column sorted Matrix --> GeeksForGeeks Problem.
// Problem Link --> https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool search(vector<vector<int> > &matrix, int n, int m, int x) {
        // code here
        int row = 0,col=m-1;
        while(row<n && col>=0){
            if(matrix[row][col] == x){
                return true;
            }
            else if(matrix[row][col] < x){
                row++;
            }
            else{
                col--;
            }
        }
        return false;
};
int main(){
    vector<vector<int>> matrix = {
        {3,30,38},
        {36,43,60},
        {40,51,69}
    };
    int row = matrix.size();
    int col = matrix[0].size();
    int k = 51;
    int ans = search(matrix,row,col,k);
    cout<<ans;
    return 0;
};
