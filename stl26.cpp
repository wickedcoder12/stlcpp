// balanced paranthesis problem 
// we will check it using stacks 
// (())() we will move and first add "("" this in stack then again "(" now closing bracket should have opening bracket to it if it has we will pop it from stack 
// finally stack should be empty after traversal of whole string
//s.pop() can only remove element from top of stack 
#include<iostream> 
using namespace std; 
unordered_map<char,int> symbol = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

string Isbalanced(string s){
    stack<char> st; 
    for(auto bracket :s){
        if(symbol[bracket]<0){
            st.push(bracket);

        }
        else{
            if(st.empty()){
                cout<<"NO";

            }
            else{
                char top = st.top;; 
                st.pop();
                if(symbol[top]+symbol[bracket]!=0){
                    cout<<"NO";

                }
            }
        }
    }
    if(st.empty()) return "YES"; 
    else return "NO"; 


}
int main(){
    int t; 
    cin>>t; 
    while(t--){
        string s; 
        cin>>s; 
        cout << Isbalanced(s) <<endl; 

    }
}