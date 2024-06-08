#include<iostream>
#include<cmath>
using namespace std;

int count(int n){
    int count = 0;
    while(n>0){
         n%10;
    count++;
    n/=10;
    }

    return count;
};

bool armstrong(int n){
    int counting = count(n);
    int x = n;
    int ans = 0;
    while(n>0){
    int rem = n%10;
    ans += pow(rem,counting);
    n/=10;
    }
    if(x == ans){
        return true;
    }
    else{
        return false;
    } 
};

int main(){
    int n;
    cout<<"Enter the Number to check whether it is armstrong number or not "<<endl;
    cin>>n;
    bool ans = armstrong(n);

    if(armstrong(n)){
        cout<<"This is a Armstrong Number "<<endl;
    }
    else{
        cout<<"This is not a Armstrong number "<<endl;
    }

    return 0;
};
