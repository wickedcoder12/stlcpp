#include<iostream> 
#include<vector> 
using namespace std; 
bool should_i_swap(int a,int b){
    if(a>b) return true; 
    else false; 

}
int main(){
    int n;
    cin>>n; 
    vector<int> a(n); 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(should_i_swap(a[j+1],a[j])){
                swap(a[j+1],a[j]); 
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
}