#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numberfor the adding the number until the single digit come "<<endl;
    cin>>n;
    int ans = 0;
    int actual_answer = 0;

    if(n<10){
        cout<<n<<endl;
        return 0;
    }
    
    while(n>0){
        int rem = n%10;
        n/=10;
        ans = rem+ans;
    }
    while(ans>=10){
        int rem = ans%10;
        ans /= 10;
        actual_answer = ans+rem;
    }
    cout<<actual_answer<<endl;
    return 0;
};
