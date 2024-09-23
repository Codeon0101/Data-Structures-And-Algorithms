#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[4][4] = {
        {1,4,2,6},
        {4,7,1,20},
        {8,7,4,3},
        {6,4,2,3}
    };
    for(int i=0;i<4;i++){
        int start = 0, end = 3;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
};
