#include<iostream>
using namespace std;

int First_Element(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
};

int Last_Element(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
};

int main(){
    int arr[] = {5,7,7,8,8,8,8,8,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8;

    cout<<"The First Element is Present At Index "<<First_Element(arr,size,target)<<endl;
    cout<<"The First Element is Present At Index "<<Last_Element(arr,size,target)<<endl;
};
