// Rotate Image by 90 Degree in Anticlockwise (GeeksForGeeks Problem)
// Problem Link --> https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

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
        for(int i=0;i<=row;i++){
            int start = 0;
            int end = col;
            while(start<=end){
                swap(matrix[start][i],matrix[end][i]);
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
