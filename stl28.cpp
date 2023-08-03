// constructing array of next greatest element 

#include<iostream> 
#include<vector> 
#include<stack>
using namespace std; 
vector<int>  NGE(vector<int> v){
    stack<int> s; 
    vector<int> nge(v.size());
    for(int i=0;i<v.size();i++){
        while(!s.empty() && v[i] > v[s.top()]){
            nge[s.top()] = i; 
            s.pop(); 
        }
        s.push(i);
}
while(!st.empty()){
    nge[st.top()] = -1; 
    st.pop(); 
}

  return nge; 
}
int main(){ 
    int n; 
    cin>>n; 
    vector<int> v; 

    for(int i=0;i<n;i++){
        int x; 
        cin>>x; 
        v.push_back(x); 

    }
    vector<int> nge = NGE(v);
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" "<< (nge[i] == -1 ? -1 : v[nge[i]])<<endl;
        
    }

}