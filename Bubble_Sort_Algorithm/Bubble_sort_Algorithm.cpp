#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    bool swapped = false;
    int temp = 0;
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j] > arr[j+1]){
                // swap(arr[j],arr[j+1]); --> Also use Built-in function for swapping the elements in the array.
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
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
