#include<iostream>
using namespace std;

int BinaryProblem(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            end = mid + 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {30,28,20,16,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 28;

    cout<<"The Element is Present at the Index "<<BinaryProblem(arr,size,key);
    return 0;
}
