// Given N strings print unique strings in lexicographical order
#include<iostream>

#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    set<string> s; 
    int n; 
    cin>>n; 
    for(int i=0;i<n;i++){
        string str; 
        cin>>str; 
        m.insert(str); 

    }
    for(auto it = s.begin;it!=s.end;it++){
        cout<<(*it)<<" "; 
        
    }
}