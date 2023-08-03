// making pair containers
#include<iostream>
#include<vector>
#include<map>
using namespace std; 
int main(){
   pair<int,string> p; 
   p = make_pair(2,"batman");
   cout<<p.first<<endl; 
   cout<<p.second<<endl; 
   
}