#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for the star you want to print: "<<endl;
    cin>>n;

    // First Half is printing of the Star.

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int spaces = (2*n) - (2*i);
        for(int k=1;k<=spaces;k++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // Second Half is printing of the star.

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int spaces = (2*n) - (2*i);
        for(int k=1;k<=spaces;k++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
};
