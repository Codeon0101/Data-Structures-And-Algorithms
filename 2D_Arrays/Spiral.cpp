#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> spiral_matrix(vector<vector<int>> &matrix){
    vector<int>ans;
    int row = matrix.size()-1,col = matrix[0].size()-1;
    int top = 0,right = col,bottom=row,left=0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
            }
        top++;
        for(int j=top;j<=bottom;j++){
            ans.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
                for(int k=right;k>=left;k--){
                    ans.push_back(matrix[bottom][k]);
                    }
            }
            bottom--;
            if(left<=right){
                for(int l=bottom;l>=top;l--){
                    ans.push_back(matrix[l][left]);
                    }
            }
            left++;
        }
        return ans;
};
int main() {
    int rows, col;
    cout << "Enter the rows and columns: " << endl;
    cin >> rows >> col;

    // Initialize the matrix with the given size
    vector<vector<int>> matrix(rows, vector<int>(col));

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Get the spiral order of the matrix
    vector<int> ans = spiral_matrix(matrix);

    cout << "The spiral matrix is: " << endl;
    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
    cout << endl;

    return 0;
};
