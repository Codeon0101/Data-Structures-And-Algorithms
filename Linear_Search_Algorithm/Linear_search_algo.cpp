#include<iostream>
using namespace std;

int Linear_search(int arr[],int n, int target){
    int ans = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            ans = i;
            break;
        }
    }
    return ans;
};

int main(){
    int n;
    cout<<"Enter the size of the Array "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element you want to search "<<endl;
    cin>>target;
    int ans = Linear_search(arr,n,target);
    cout<<ans<<endl;
    return 0;
};
