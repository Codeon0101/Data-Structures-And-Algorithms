#include<iostream>
using namespace std;


int Insert_Position(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
};
int main(){
    int arr[1000];
    int size;
    cout<<"Enter The Size of the array "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter The Target which you want to print "<<endl;
    cin>>target;
    cout<<"The Number is Present At Index "<<Insert_Position(arr,size,target);
    return 0;
};
