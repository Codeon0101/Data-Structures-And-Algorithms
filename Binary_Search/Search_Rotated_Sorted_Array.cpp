#include<iostream>
using namespace std;

int Minimum_Element(int arr[],int size,int target){
        int start = 0;
        int end = size-1;
        int ans = -1;

        while(start <= end){
            int mid = end + (start-end)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] >= arr[0]){
                if(arr[start]<=target && arr[mid]>=target){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            else{
                if(arr[mid]<=target && arr[end]>=target){
                    start = mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return ans;
};

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 0;
    int ans = Minimum_Element(arr,size,target);
    cout<<ans<<endl;
};