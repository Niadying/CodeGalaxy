#include<iostream>
#include<deque>
using namespace std;

int main (){

    // IT IS A DOUBLE ENDED QUEUE AND IT IS DYNAMIC. IT DOES NOT HAVE CONTINOUS MEMORY ALLOCATION..
    // WE CAN PERFOM PUSH_BACH AND POP_BACK FROM BEIGNING AND AS WELL AS FROM LAST.. 

    deque<int>d;
    d.push_back(189);
    d.push_back(3);
    d.push_front(9);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at first index -> "<<d.at(0)<<endl;

    cout<<"Front -> "<<d.front()<<endl;
    cout<<"Back -> "<<d.back()<<endl;
    cout<<"Size before erase -> "<<d.size()<<endl;

    d.pop_back();
    d.pop_front();

    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"Size after erase - > "<<d.size()<<endl;
}

