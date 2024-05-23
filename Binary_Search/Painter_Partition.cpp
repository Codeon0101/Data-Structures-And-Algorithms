#include<iostream>
using namespace std;

// Painter Partition problem GeeksForGeeks 

long long painter_partition(int arr[],int size,int k){
    long long start=0,end=0,ans=0,mid;
        for(int i=0;i<size;i++){
            if(start<arr[i]){
                start = arr[i];
            }
            end += arr[i];
        }
        while(start<=end){
            mid = start+(end-start)/2;
            long long painter = 1,wall=0;
            for(int j=0;j<size;j++){
                wall += arr[j];
                if(wall>mid){
                    painter++;
                    wall = arr[j];
                }
            }
            if(painter<=k){
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
    int arr[] = {10,20,30,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int ans = painter_partition(arr,size,k);
    cout<<ans<<endl;
};
