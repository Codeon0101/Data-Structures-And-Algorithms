#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of number: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        int num = 5;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
};
