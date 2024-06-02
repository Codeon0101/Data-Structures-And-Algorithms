#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for printing the star: "<<endl;
    cin>>n;

    for(int i=n;i>=1;i--){
        int spaces = n-i;
        for(int j=1;j<=spaces;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
};
