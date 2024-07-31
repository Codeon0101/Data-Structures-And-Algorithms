#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v3 = {20,10,45,0,3,14,1,20};
    
    cout<<"Elements After Push_Back "<<endl;
    v3.push_back(89);
    for(auto i:v3){
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    cout<<"Elements After Pop_Back "<<endl;
    v3.pop_back();
    for(auto i:v3){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"Front Element "<<v3.front()<<endl;
    cout<<"Last Element "<<v3.back()<<endl;
    cout<<"Search Element in the Vector by Binary Search in STL "<<binary_search(v3.begin(),v3.end(),20)<<endl;

    cout<<"Sort the Elements in the Increasing order "<<endl;
    sort(v3.begin(),v3.end());
    for(int k=0;k<v3.size();k++){
        cout<<v3[k]<<" ";
    }
    cout<<endl;

    cout<<"Sort the Elements in the Decreasing order "<<endl;
    sort(v3.begin(),v3.end(),greater<int>());
    sort(v3.rbegin(),v3.rend()); // Another method for sorting in Decreasing order.
    for(int k=0;k<v3.size();k++){
        cout<<v3[k]<<" ";
    }
    cout<<endl;

    cout<<"Erase the Element from a Particular Index "<<endl;
    v3.erase(v3.begin()+1);
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Insert the Element at a Particular Index "<<endl;
    v3.insert(v3.begin()+2,60);
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Find the Particular Element from the Vector "<<endl;
    cout<<find(v3.begin(),v3.end(),14)-v3.begin()<<endl;

    cout<<"Check the whether the given vector is Empty or not "<<v3.empty()<<endl;

    cout<<"The size of the Vector "<<v3.size()<<endl;
    cout<<"The capacity of the Vector "<<v3.capacity()<<endl;

    cout<<"All the elements of the Vector is printing by pointing the Begining and ending "<<endl;
    for(auto i=v3.begin();i!=v3.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Clear the Element from the Vector "<<endl;
    v3.clear();

    return 0;
};
