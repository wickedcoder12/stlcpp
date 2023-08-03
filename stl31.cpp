// upper bound function in stl 
// in case of lower bound - if element is present in an array - it returns that element only 
// if element is not present it returns element just larger than it 
// in case of upper bound it will return - 
#include<iostream> 
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n ; 
    cin>>n; 
    int a[n]; 
    for(int i=0;i<n;i++){
         cin>>a[i]; 
    }

    sort(a,a+n); 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
}