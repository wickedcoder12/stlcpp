// given N strings print various strings in lexographical order with their frequency // 
// N = 10^5//  // use m.clear to clear whole map 
#include<iostream> 
#include<vector>
#include<map>
using namespace std; 
int main(){
    map<string,int> m;
    int n; 
    cin>>n;

    for(int i=0;i<n;i++){
        string s; 
        cin>>s;
        m[s]++;
        

    }
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;

    }
}