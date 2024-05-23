#include<iostream>
using namespace std;

// Capacity To Ship Packages Within D Days

int shipWithinDays(int weights[],int size, int days) {
        int start=0,end=0,mid,ans=0;
        for(int i=0;i<size;i++){
            start = max(start,weights[i]);
            end += weights[i];
        }

        while(start<=end){
            mid = start+(end-start)/2;
            int weight = 0,day=1;
            for(int j=0;j<size;j++){
                weight += weights[j];
                if(weight>mid){
                    day++;
                    weight = weights[j];
                }
            }
            if(day <= days){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;

};

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int days = 5;
    int ans = shipWithinDays(arr,size,days);
    cout<<ans<<endl;
};
