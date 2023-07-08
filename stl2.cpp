// making pair containers
#include<iostream>
#include<bits>/stdc++.h> 
using namespace std; 
int main(){
    pair<int,string> p; 
    p = make_pair(2,"batman"); // taking input in pair 

    cout<<p.first<<endl; // will give first element of pair
    cout<<p.second<<endl; // will give second element of pair
    
    return 0;
    
}