// sort in c++ stl ; 
#include<iostream> 
#include<vector> 
using namespace std;
int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){ 
        cin>>arr[i]; 

    }
    sort(arr+2,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 

    }
}