// vector of pair 
#include<iostream> 
#include<vector>
#include<map>
using namespace std; 
void printvec(vector<pair<int,int> > v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second;

    }
    cout<<endl; 

}
int main(){
    int n; 
    cin>>n; 
    vector<pair<int,int> > v; 
    
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});

    }

    printvec(v);


}