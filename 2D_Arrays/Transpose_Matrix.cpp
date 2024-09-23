// --> Transpose of a Matrix Gfg

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = matrix.size()-1;
    int col = matrix[0].size()-1;
    for(int i=0;i<=row;i++){
        for(int j=i+1;j<=col;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
};

// --> Another Solution for Transposing the Matrix.

/* #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = matrix.size()-1,col = matrix[0].size()-1;
        for(int i=0;i<row;i++){
            for(int j=col;j>=0;j--){
                if(i == j){
                    break;
                }
                else{
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}; */

