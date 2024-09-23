// Elements should print in Wave form order 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[4][4] = {
        {1,6,2,6},
        {4,5,1,20},
        {8,7,4,3},
        {6,4,2,3}
    };
    int arr[4][4];
    for(int i=0;i<4;i++){
        int j = 0;
        if(i%2 == 0){
        while(j<4){
            cout<<matrix[j][i]<<" ";
            j++;
        }
        cout<<endl;
        }
        else{
        int k = 3;
        while(k>=0){
            cout<<matrix[k][i]<<" ";
            k--;
        }
        cout<<endl;
        }
    }
    return 0;
};


// Elements should print in Wave form order 

/* #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[4][4] = {
        {1,6,2,6},
        {4,5,1,20},
        {8,7,4,3},
        {6,4,2,3}
    };
    for(int i=0;i<4;i++){
        if(i%2 != 0){
            int start = 0;
            int end = 3;
            while(start<end){
                swap(matrix[start][i],matrix[end][i]);
                start++;
                end--;
            }
        }
        
    }
    for(int k=0;k<4;k++){
        for(int l=0;l<4;l++){
            cout<<matrix[k][l]<<" ";
        }
        cout<<endl;
    }
    return 0;
};

*/
