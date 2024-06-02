#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Alphabet: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        int spaces = n-i;
        for(int j=1;j<=spaces;j++){
            cout<<"  ";
        }
        char ch = 'A';
        for(int k=1;k<=i;k++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
};
