#include<iostream>
#include<queue>
using namespace std;

int main (){

    queue<string>q;
    q.push("Prateek");
    q.push("Sahu");
    q.push("IIIT Bhopal");

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

}