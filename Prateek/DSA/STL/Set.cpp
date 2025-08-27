#include<iostream>
#include<set>
using namespace std;

int main (){

    // IT ONLY STORES UNIQUE NUMBERS.
    // IT GIVES OUTPUT IN A SORTED ORDER.
    // UNORDERED SET IS FAST THEN ORDERED SET BUT IT DOES'T GIVE OUTPUT IN A SORTED FORM..

    set<int>s;
    s.insert(2);  // GIVING INPUT IN THE..
    s.insert(2);
    s.insert(2); // COMPLEXITY OF INSERTION IS O(log(n))..
    s.insert(32);
    s.insert(23);
    s.insert(23);
    s.insert(312);
    s.insert(3213);

    // PRINTING THE OUTPUT.

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();  // DEFINING begin ITERATOR AS it...
    it++;
    s.erase(it);
    
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Is 2 present or not -> "<<s.count(2)<<endl;

    set<int>:: iterator itr = s.find(312);
    
    for(auto it = itr; it!= s.end(); it++){  // GOT A REFERNECE OF 312, ONLY VALUE FROM 312 WILL BE PRITNED..
        cout<<*it<<" ";
    }

    // SABKI COMPLEXITY O(log(n))  HAI..
    // BEGIN / END KI O(log(n)) HAI..
}