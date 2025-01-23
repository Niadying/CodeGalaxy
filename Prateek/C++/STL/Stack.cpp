#include<iostream>
#include<stack>
using namespace std;

int main (){

    stack<string>s;  // JO LAST MAI DALTE HAI WOH PEHLE AATA HAI...
    s.push("Prateek");
    s.push("Sahu");
    s.push("IIIT BHOPAL");

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();

    cout<<"Empty OR Not "<<s.empty()<<endl;

}