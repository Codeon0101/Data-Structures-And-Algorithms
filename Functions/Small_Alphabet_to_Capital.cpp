#include<iostream>
using namespace std;

void convert_alphabet(char ch){
    char capital_alphabet = ch-'a'+'A';
    cout<<capital_alphabet<<endl;
    return;
};

int main(){
    char ch;
    cout<<"Enter the Alphabet "<<endl;
    cin>>ch;

    convert_alphabet(ch);
    return 0;
};
