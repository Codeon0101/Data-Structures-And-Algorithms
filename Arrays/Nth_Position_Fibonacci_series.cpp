#include<iostream>
using namespace std;

void nth_position_fibonacci(int arr[],int n){
    arr[0] = 0;
    arr[1] = 1;

    for(int i=2;i<=n-1;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<arr[n-1];

    return;

};

int main(){
    int n;
    cout<<"Enter the size of the element "<<endl;
    cin>>n;
    int arr[n];

    nth_position_fibonacci(arr,n);
    return 0;
};