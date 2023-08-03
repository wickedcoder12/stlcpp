// checking valid paranthesis 
#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 
string isvalid(string s){
     unordered_map<char,int> m = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
      stack<char> st; 
      for(auto &k : s){ 
        if(m[k]<0){
            st.push(k); 
        }
        else{
            if(m[k] + m[st.top()]!=0){
                return "NO"; 
        }
          else{
            s.pop(); 

          }
      }

}
  if(st.empty()) return "YES" ; 
  else return "NO"; 
}
int main(){ 
    int t; 
    cin>>t;
    while(t--){ 
        string s; 
        cin>>s; 
        string k = isvalid(s); 
        cout<<k<<endl; 

    }

}