#include<iostream>
using namespace std;
 
int main()
{
    int a = 2, b = 3;
 
    cout<<"Before swapping a = " << a << " , b = " << b<< endl;
 
    // temporary variable
    int temp;
 
    // appying swapping algorithm
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b
         << endl;

    cout<<"Two Numbers are Swap Successfully "<<endl;
    return 0;
};
