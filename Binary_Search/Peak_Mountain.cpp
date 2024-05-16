#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,10,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    int ans = 0;

    while(start < end){
        int mid = start + (end-start)/2;
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    cout<<arr[start]<<endl;
};
