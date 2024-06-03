#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for converting into decimal to Binary: ";
    cin>>n;
    int mul = 1;
    int ans = 0;
    while(n!=0){
        int rem = n%2;
        n/=2;
        ans = rem*mul+ans;        // Formula for reversing the Number. --> Also written like that __ ans = "rem*po(10,i)+ans".
        mul *= 10;
    }
    cout<<ans<<endl;
    return 0;
};