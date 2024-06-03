#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to reverse "<<endl;
    cin>>n;
    int ans = 0;

    while(n!=0){
        int rem = n%10;
        n/=10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            cout<<"The integer side is on overflow "<<endl;
            return 0;
        }
        else{
            ans = ans*10+rem;
        }
    }
    cout<<ans<<endl;
    return 0;
};
