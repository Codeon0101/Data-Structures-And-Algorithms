// Diagonal sum in the 2D Array

#include<iostream>
using namespace std;
int main(){
    int matrix[4][4] = {
        {1,4,2,6},
        {4,7,1,20},
        {8,7,4,3},
        {6,4,2,3}
    };
    // First Diagonal
    int first = 0;
    int i=0;
    while(i<4){
        first += matrix[i][i];
        i++;
    }
    // Second Diagonal
    int second = 0;
    i = 0; int j = 3;
    while(j>=0){
        second += matrix[i][j];
        i++;
        j--;
    }
    cout<<first<<" "<<second;
    return 0;
};
