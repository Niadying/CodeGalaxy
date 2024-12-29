#include<list>
#include<iostream>
using namespace std;

int main (){

    list<int>l;  // CAN'T GET ELEMENT DIRECT AT ANY POSITION USING AT OPERATOR, WE NEED TO TRAVEL..
    list<int>n(5,9999);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(78);
    l.push_back(7);
    l.push_front(8);
    list<int>f(l);
       for(int i : f){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());  // TIME COMPLIXITY OF ERASE IF O(N)..
    for(int i:l){
        cout<<i<<" ";
    }

//  ALL THE FUNCTIONS ARE AVAILABE LIKE POP BACK/FRONT, SIZE OF ETC...

}