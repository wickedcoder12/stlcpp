// we will talk about maps now 
// we will talk about normal maps and unordered maps 
// map is data structure that stores which stores data corresponding to a key basically maps it 
// int - string map 
//  1     abc 
// 5      cdc  here 5 and 1 is key and maps help in mapping 
// normal map stores data in sorted order 
// unordered map doesnt store in sorted order 
// normal map implemented using red black trees 
// we cant do it+1 in maps because mapes are not continous 
//keys of map are unique  we cant insert duplicate keys 

#include<iostream> 
#include<vector>
#include<map>
using namespace std;
int main(){
 map<int,string> m; 
 m[1] = "abc"; 
 m[5] = "cdc";
 m[3] = "ecd"; // O(log n) is complexity of writing m[3] or m[2] or m[1] whatever 

 m.insert({4,"afg"});
 /*
 map<int,string> :: iterator it; 
 for(it = m.begin();it!=m.end();it++){
    cout << (*(it)).first << " " << (*(it)).second<<endl; 

 }
 */
for(auto &value : m){
    cout<<value.first<<" "<<value.second<<endl; 

} // this complexity is also O (nlogn) 
// using m.find function  
// it returns an iterator 
auto it = m.find(3);
if(it == m.end()){
    cout<< "NO VALUE";

}
else{
    cout<<(*it).first<<" "<<(*it).second;
}
}