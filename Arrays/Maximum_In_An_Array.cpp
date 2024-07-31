#include<iostream>
#include<climits>
using namespace std;

int minimum(int arr[], int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
};

int main(){

    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = minimum(arr,n);
    cout<<ans<<endl;

    return 0;
};
