#include<iostream>
using namespace std;

int kth_Missing(int arr[],int size,int k){
    int start = 0;
    int end = size-1;
    int ans = size;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]-mid-1 >= k){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans+k;
};

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int ans = kth_Missing(arr,size,k);
    cout<<ans<<endl;
};
