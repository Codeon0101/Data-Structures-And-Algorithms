#include<iostream>
#include<limits.h>
using namespace std;

bool isPalindrome(int x) {
        int n = x;
        int ans = 0;
        if(x < 0){
            return false;
        }
        while(x>0){
            int rem = x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return false;
            }
            ans = ans*10+rem;
        }
        if(n == ans){
            return true;
        }
        else{
            return false;
        }
};

int main(){
    int n;
    cout<<"Enter the number to check whether it is Palidrome or not: "<<endl;
    cin>>n;
     bool ans = isPalindrome(n);
    if(ans) {
        cout << "true" << endl;
    } 
    else {
        cout << "false" << endl;
    }
    return 0;
};