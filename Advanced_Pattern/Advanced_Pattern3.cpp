#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for the star: "<<endl;
    cin>>n;
    
    // First Half of the star.

    for(int i=1;i<=n;i++){
        int spaces = n-i;
        for(int j=1;j<=spaces;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        for(int l=1;l<=i-1;l++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Second Half of the star.

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
