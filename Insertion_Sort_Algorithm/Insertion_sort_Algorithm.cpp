#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int n){
    int temp = 0;
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j] < arr[j-1]){
                // swap(arr[j],arr[j-1]); --> Also use Built-in function for swapping the elements in the array.
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else{
                break;
            }
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
    Insertion_sort(arr,n);

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
};
