#include<iostream> 
#include<bits/stdc++.h> 
// unordered set all time complexities are O(1) we use unordered set to check presence of any element 
// given N string and q queries in each query u r given a string print yes if string is present print no if string is not present 

int main(){ 
unordered_set<string> s; 
int n; 
cin>>n; 
for(int i=0;i<n;i++){
    string str; 
    cin>>str; 
    s.insert(str); 

}
int q; 
cin>>q; 
while(q--){
    string str; 
    cin>>str; 
    if(s.find(str) == s.end()){
        cout<<"NO";

    }
    else{
        cout<<"YES"; 
        
    }
}
}