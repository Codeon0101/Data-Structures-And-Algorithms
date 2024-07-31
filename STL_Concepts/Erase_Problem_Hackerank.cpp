#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
    int m,o,p;
    cin>>m;
    cin>>o>>p;
    v.erase(v.begin()+m-1);
    v.erase(v.begin()+o-1,v.begin()+p-1);
    cout<<v.size();
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
