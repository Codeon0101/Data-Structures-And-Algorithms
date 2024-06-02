#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Star you want to Print: "<<endl;
    cin>>n;

    // Star printing for the first half of the Butterfly.

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int spaces = (2*n)-(2*i);
        for(int k=1;k<=spaces;k++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Star printing for the Another Half of the Butterfly.

    for(int i=n-1;i>=1;i--){
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        int spaces = (2*n)-(2*i);
        for(int l=1;l<=spaces;l++){
            cout<<"  ";
        }
        for(int star=1;star<=i;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
};