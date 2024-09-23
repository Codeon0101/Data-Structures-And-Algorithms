// Row index with maximum sum :-

#include<iostream>
#include<climits>
using namespace std;

int row_index(int matrix[][4]){
    int maxi = INT_MIN;
    int row_index = 0;
    for(int row=0;row<4;row++){
        int sum = 0;
        for(int col=0;col<4;col++){
            sum += matrix[row][col];
        }
        if(maxi<sum){
            maxi = sum;
            row_index = row;
        }
    }
    return row_index;
};

int main(){
    int matrix[4][4] = {
        {1,4,2,1},
        {4,7,1,20},
        {8,7,4,3},
        {6,4,2,3}
    };
    int ans = row_index(matrix);
    cout<<ans;
    return 0;
};