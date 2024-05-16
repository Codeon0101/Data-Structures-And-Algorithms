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
    int arr[] = {1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int firstIndex = First_Element(arr, size, target);
    int lastIndex = Last_Element(arr, size, target);

    if (firstIndex != -1 && lastIndex != -1) {
        int ans = lastIndex - firstIndex + 1;
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
