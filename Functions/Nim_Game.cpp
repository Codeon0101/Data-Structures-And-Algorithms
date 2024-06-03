#include<iostream>
using namespace std;

bool nimGame(int n){
    if(n%4 == 0){
        return false;
    }
    else{
        return true;
    }
};


int main(){
    int n;
    cout<<"Enter the number to play the Game :"<<endl;
    cin>>n;

    int ans = nimGame(n);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
};