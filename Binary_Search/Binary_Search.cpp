#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[1000];
    
    int n;
    cout<<"Enter the Size of the Element "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key You want to Search "<<endl;
    cin>>key;

    cout<<"The Element is present at Index "<<BinarySearch(arr,n,key)<<endl;

}
