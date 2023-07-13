// given N strings print various strings in lexographical order with their frequency // 
// N = 10^5//  // use m.clear to clear whole map 
#include<iostream> 
#include<bits/stdc++.h> 
using namespace std; 
int main(){
    map<string,int> m;
    int n; 
    cin>>n 
    int m[s] = 0;

    for(int i=0;i<n;i++){
        string s; 
        cin>>s;
        m[s] = m[s]+1;

    }
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;

    }
}