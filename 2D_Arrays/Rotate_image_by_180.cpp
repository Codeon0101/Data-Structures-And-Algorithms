// Rotate Image by 180 Degree (GeeksForGeeks problem)
// Problem Link --> https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

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
            int start=0;
            int end=col;
            while(start<=end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
        
        for(int i=0;i<=row;i++){
            for(int j=i+1;j<=col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<=row;i++){
            int start=0;
            int end=col;
            while(start<=end){
                swap(matrix[i][start],matrix[i][end]);
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


// Another Solution To Solve The Same Problem -->

/* #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row = matrix.size()-1,col = matrix[0].size()-1;
    for(int i=0;i<=row;i++){
        int start=0,end=row;
        while(start<end){
            swap(matrix[start][i],matrix[end][i]);
            start++;
            end--;
        }
    }
    for(int i=0;i<=row;i++){
        int start=0,end=row;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    for(int k=0;k<=row;k++){
        for(int l=0;l<=col;l++){
            cout<<matrix[k][l]<<" ";
        }
        cout<<endl;
    }
    return 0;
};
 */