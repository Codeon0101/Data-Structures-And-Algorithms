#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the year to check whether the year is leap or not "<<endl;
    cin>>n;

    if(n%400==0 && n%100 != 0){
        cout<<"The year is a Leap Year "<<endl;
    }
    else if(n%4 == 0){
        cout<<"The year is a Leap Year "<<endl;
    }
    else{
        cout<<"The year is not a Leap Year "<<endl;
    }
    return 0;
};
