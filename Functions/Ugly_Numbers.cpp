#include<iostream>
using namespace std;

bool isUgly(int n){

    if(n == 1){
        return true;
    }

    while(n>1){
        if(n%2==0){
            n/=2;
        }
        else if(n%3==0){
            n/=3;
        }
        else if(n%5==0){
            n/=5;
        }
        else{
            return false;
        }
    }
    return true;
};


int main(){
    int n;
    cout<<"Enter the Number to check whether the number is Ugly or not "<<endl;
    cin>>n;
    int ans = isUgly(n);

    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
};