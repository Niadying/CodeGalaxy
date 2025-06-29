#include<queue>
#include<iostream>
using namespace std;

int main (){
    // TC -> LOG(N);
    // MAX HEAP...
    priority_queue<int>maxi;  // IT ALWAYS GIVES THE MAXIMUM VALUE WHEN THE VALUE IS ACCESSED.. 

    // MIN HEAP... 
    priority_queue<int , vector<int>, greater<int> >mini;  // IT ALWAYS GIVES MINIMUM VALUE WHEN THE VALUE IS ACCESSED..
    maxi.push(3);
    maxi.push(45);
    maxi.push(1);
    maxi.push(-5627);
    maxi.push(89);
    maxi.push(434759);
    maxi.push(234);
    maxi.push(3);
    int n = maxi.size();

    for(int i= 0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(1);
    mini.push(-5627);
    mini.push(89);
    mini.push(434759);
    mini.push(234);
    mini.push(45);
    int m = mini.size();
    for(int i= 0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Khali hai kya Bhai?? -> "<<maxi.empty()<<endl;
    cout<<"Khali hai kya Bhai?? -> "<<mini.empty()<<endl;
}