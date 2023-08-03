//declaring iterator using auto function 

#include<iostream> 
#include<vector>
#include<map>
using namespace std; 
int main(){
  vector<int> v = {1,2,3,4};
  for(auto it = v.begin();it!=v.end();it++){
    cout<<(*(it))<<" ";
    
  }
}