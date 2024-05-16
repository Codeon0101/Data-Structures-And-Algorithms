#include<iostream>
using namespace std;

int main(){
    int x = 8;
    int start = 1;
    int end = x;
    int ans = 0;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(mid == x/mid){ // Handle The Integer Overflow.,.,
            cout<<mid<<endl;
            break;
        } 
        else if(mid < x/mid){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<ans<<endl;
};
