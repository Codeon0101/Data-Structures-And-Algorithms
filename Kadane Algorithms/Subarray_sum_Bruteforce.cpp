// Array Divide into TWo parts and then, calculate whether the sum is equal or not of dividing parts of the Array.

#include<iostream>
using namespace std;


bool subarray_sum(int arr[],int size){

    for(int i=0;i<size-1;i++){
        int sum1=0,sum2=0;
        for(int j=0;j<=i;j++){
            sum1 += arr[j];
        }
        for(int k=i+1;k<size;k++){
            sum2 += arr[k];
        }
        if(sum1 == sum2)
        return true;
        
    }
    return false;
};

int main(){
    int arr[] = {3,4,-2,5,8,20,-10,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = subarray_sum(arr,size);

    if(ans)
    cout<<"The sum is equal with the Subarray "<<endl;
    else
    cout<<"The sum not is equal with the Subarray "<<endl;

    return 0;
};
