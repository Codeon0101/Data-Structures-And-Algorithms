#include<iostream>
using namespace std;

void cyclic_rotate(int arr[],int size){

    int temp = arr[size-1];
    for(int i=size-2;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    return;
};

int main(){
    int arr[] = {2,7,4,11,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cyclic_rotate(arr,size);
    
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
};