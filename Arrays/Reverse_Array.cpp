#include<iostream>
using namespace std;

void reverse_number(int arr[], int size){
    int temp = 0;
    int start = 0;
    int end = size-1;

    while(start<=end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return;
};


int main(){
    int size;
    cout<<"Enter the size of the Array "<<endl;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse_number(arr,size);
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
};