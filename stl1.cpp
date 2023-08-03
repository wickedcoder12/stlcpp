//we will see how to initialize a vector and how to take input and output from it
#include<iostream>
#include<vector>
#include<map>

using namespace std ; 
int main(){
    int n; 
    cin>>n;  // size of my vector that user defines 

    vector<int> v; 
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 

    }

    return 0; 
    

}