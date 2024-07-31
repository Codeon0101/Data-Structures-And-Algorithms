#include<iostream>
using namespace std;

int missing_number(int arr[], int size){
    int sum = size*(size+1)/2;
    int original_sum = 0;
    for(int i=0;i<size-1;i++){
        original_sum += arr[i];
    }
    int missing_number = sum - original_sum;

    return missing_number;

};

int main(){
    int n = 11;
    int arr[] = {1,2,3,4,5,6,7,8,10,11};
    int ans = missing_number(arr,n);

    cout<<ans;
};
