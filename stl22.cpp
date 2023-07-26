// multiset question
//Our Monk loves candy!
/* 
monk and candy problem - 
While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume
*/
#include<iostream> 
int main(){
    multiset<int> m; 
    int n; 
    cin>>n; 
    for(int i = 0;i<n;i++){
        int x; 
        cin>>x; 
        m.insert(x); 
    }
    int k; 
    cin>>k; 
    int totalcandy = 0; 

    while(k--){
        auto lastit = (--m.end());
        int candy = (*lastit) ; 
        totalcandy = totalcandy + candy; 
        m.erase(lastit); 
        m.insert(candy/2); 


    }
    cout<<totalcandy<<" ";  
    
}