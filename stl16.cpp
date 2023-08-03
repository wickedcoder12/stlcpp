// unordered maps 
// these kind of maps are unordered as name suggests 
// unordered maps use hash tables 
// pairs dont have inbuilt hash function so unordered maps cant use pair insertion but ordered maps  can 
#include<iostream> 
#include<vector>
#include<map>
#include<unordered_map>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    unordered_map<int,string> m; 
    m[1] = "abc";
    m[2] = "cdc"; 
    m[3] = "acd"; // O(1) time complexity 
    auto it = m.find(2) // O(1) complexity 
}