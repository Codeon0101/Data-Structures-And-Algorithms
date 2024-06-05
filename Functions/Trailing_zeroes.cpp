#include<iostream>
using namespace std;


int trailing_zeroes(int n){
    int count = 0;
        if(n<5){
            return 0;
        }
        while(n>=5){
            n/=5;
            count += n;
        }
        return count;
};

int main(){
    int n;
    cout<<"Enter the number that want to check for their Trailing zeroes "<<endl;
    cin>>n;

    int ans = trailing_zeroes(n);
    cout<<"The number of Trailing Zeroes in "<<n<<" is "<<ans;
};
