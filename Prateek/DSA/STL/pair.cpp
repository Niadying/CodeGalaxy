#include<bits/stdc++.h>
using namespace std;

int main (){
    pair<int,char>p={3,'P'};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , pair<int,char>>pa={1,{5,'P'}};
    cout<<p.first<<" "<<pa.second.first<<" "<<pa.second.second<<endl;

    pair<int,int>arr[]={{1,2},{34,5}};
    cout<<arr[0].first;
}