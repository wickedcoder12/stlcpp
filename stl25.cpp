//stacks and queues 
// stacks and queues are used in various problems 
// stack is lifo data structure last in first out (lifo) stack is like a bucket of data 
// we can access only 2 things in stacks top element and size of stack 
// whenever we place element in stack it gets to the top of stack 
// push operation (adding in stack) , pop operation (remove ) , top(looking above element)
// queues are fifo(first in first out) data structure 
// queue is like a pipeline 
// queue has push operation (adding in queue adds element in end) , pop(removing element in front of queue) ,front(looking at front element of queue)
#include<iostream>  
#include<bits/stdc++.h> 
using namespace std; 
int main(){
    /* 
    stack<int> s; 
    s.push(2); 
    s.push(3); 
    s.push(4); 
    // emptying the stack 
    while(!s.empty()){
        cout<<s.top() <<endl ;
        s.pop(); 


    }
    */ 
   queue<string> q; 
   q.push("abc"); 
   q.push("cde"); 
   q.push("efh"); 
   while(!q.empty()){
    cout<<q.front()<<endl; 
    q.pop(); 
    
   }
}