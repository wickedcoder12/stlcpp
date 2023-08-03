// we will se iterators now - 
//there are 2 type of iterators in vectors - begin and end
#include<iostream> 
#include<vector>
#include<map>
using namespace std; 
int main(){
   vector<int> v ={2,3,4,5};
   vector<int> ::iterator it =v.begin(); //declaring iterator 
   cout<<(*(it+1))<<endl;
   // traversing array through iterators- 
   for(it =v.begin();it!=v.end();it++){
    cout<<(*(it))<<" ";
    
   }
}