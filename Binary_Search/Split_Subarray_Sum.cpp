#include<iostream>
using namespace std;

int splitArray(int arr[] ,int N, int K) {
        int start=0,end=0,mid,ans=0;
        
        for(int i=0;i<N;i++){
            start = max(start,arr[i]);
            end += arr[i];
        }
        while(start<=end){
            mid = start+(end-start)/2;
            int subarray_sum = 0,count = 1;
            for(int j=0;j<N;j++){
                subarray_sum += arr[j];
                if(subarray_sum>mid){
                    count++;
                    subarray_sum = arr[j];
                }
            }
            if(count<=K){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    };

int main(){
    int arr[] = {1,2,3,4};
    int N = sizeof(arr)/sizeof(arr[0]);
    int K = 3;
    int ans = splitArray(arr,N,K);
    cout<<ans<<endl;

};
