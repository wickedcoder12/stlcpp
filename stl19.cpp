//sets we will talk about sets now 
//sets is just which store keys unlike maps which store key value pair 
// set 3 types are sets unordered sets and multisets 
// set store unique elements 
// we cant store duplicate elements 
#include<iostream> 
using namespace std; 
int main(){ 
  set<string> s; 
  s.insert("abc"); // O(log n) complexity 
  s.insert("zdbf"); 
  // we can access value of set by s.find 
  auto it = s.find("abc"); 
  cout<<(*it)<<endl; 
  
  //s.erase(it) we can erase element from set using it 
  
  
}