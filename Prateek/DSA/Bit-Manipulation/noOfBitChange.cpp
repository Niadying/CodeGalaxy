#include<bits/stdc++.h>  // NORMAL
using namespace std;
using ll = long long;

ll changes(ll start, ll goal){
    return __builtin_popcount(start^goal);
}
int main (){
    ll start = 29;
    ll goal = 54;

    cout<<changes(start,goal);
}