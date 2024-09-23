// Add 2D Array Matrix or 2D Array :-

#include<iostream>
using namespace std;

void add_matrix(int matrix1[][4],int matrix2[][4]){
    int ans[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ans[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout<<"Matrix After added "<<endl;
    for(int k=0;k<4;k++){
        for(int l=0;l<4;l++){
            cout<<ans[k][l]<<" ";
        }
        cout<<endl;
    }
    return;
};

int main(){

    int matrix1[4][4] = {
        {1,4,2,1},
        {4,7,1,5},
        {8,7,4,3},
        {6,4,2,3}
    };
    int matrix2[4][4] = {
        {8,9,6,10},
        {15,12,5,6},
        {23,4,1,5},
        {1,4,5,2}
    };
    add_matrix(matrix1,matrix2);
};
