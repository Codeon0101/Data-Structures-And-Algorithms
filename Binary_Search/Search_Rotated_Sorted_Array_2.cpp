#include<iostream>
using namespace std;

bool Minimum_Element(int arr[],int size,int target){
        int start = 0;
        int end = size-1;

        while(start <= end){
            int mid = end + (start-end)/2;

            if(arr[mid] == arr[start] && arr[mid] == arr[end]){
                start++;
                end--;
            }

            if(arr[mid] == target){
                return true;
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
        return false;
};

int main(){
    int arr[] = {1,0,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 0;
    bool ans = Minimum_Element(arr,size,target);
    cout<<boolalpha<<ans<<endl;
};
