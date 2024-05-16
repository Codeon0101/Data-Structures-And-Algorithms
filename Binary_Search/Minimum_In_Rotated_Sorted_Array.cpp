#include<iostream>
using namespace std;

int Minimum_Element(int arr[],int size){
    int start = 0;
    int end = size-1;
    int ans = arr[0];

    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            ans = arr[mid];
            end = mid-1;
        }
    }
    return ans;
};

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = Minimum_Element(arr,size);
    cout<<ans<<endl;
};