//vectors of vector 
#include<iostream> 
#include<bits/stdc++.h> 
using namespace std; 
 void printvec(){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl; 

 }
int main(){
    int N; 
    cin>>N;
    for(int i=0;i<N;i++){
        int n; 
        cin>>n; 
        for(int j=0;j<n;j++){
            int x; 
            cin>>x; 
            v[i].push_back(x);
        }
    }

    for(int i=0;i<N;i++){
        printvec(v[i]);
        
    }

}