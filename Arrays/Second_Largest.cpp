#include<iostream>
#include<climits>
using namespace std;

int second_largest(int arr[], int n){
    int max = INT_MIN;
    int second_largest_number = INT_MIN; 

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int j=0;j<n;j++){
        if(arr[j] != max){
            if(arr[j] > second_largest_number){
                second_largest_number = arr[j];
            }
        }
    }
    return second_largest_number;
};

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = second_largest(arr,size);
    cout<<ans;
    return 0;
};
