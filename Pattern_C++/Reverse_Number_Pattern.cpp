#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of number: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
};