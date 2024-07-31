#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
    }
    swap(arr[i],arr[index]);
    }
};

int main(){
    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
};
