//using m.erase function 
// erase values from maps 
// it can take value of key and both iterators  
// if we dont add anything in value we get 0 as default 
#include<iostream> 
#include<vector>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    //while inserting keys as string we get time complexity as s.size()*logn instead of logn 
    m[1] = "abc"; 
 m[5] = "cdc";
 m[3] = "ecd";
 m.insert({4,"afg"});
 m.erase(3); // complexity is log(n)
 auto it = m.find(5); // we can also erase through iterators 
 m.erase(it);

 for(auto &value : m){
    cout<<value.first<<" "<<value.second<<endl;

 }
}