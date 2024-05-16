#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,1,1,1,1,1,1,1,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    int ans = 0;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == 0){
            end = mid-1;
        }
        else if(arr[mid] > 0){
            start = mid+1;
        }
    }
    ans = n-end-1;
    cout<<ans<<endl;
};
