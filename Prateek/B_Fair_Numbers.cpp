#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    ll n;
    cin>>n;
    set<int>digits;
    bool poss = false;
    while(!poss){
        ll z = n;
        bool hello = true;
        set<int>digits;
        while(z){
            int temp = z%10;
            if(temp) digits.insert(temp);
            z/=10;
        }
        for(auto i:digits){
            if(n%i!=0){
                hello = false;
                poss = false;
                n++;
                break;
            }
        }
        if(hello)
        poss = true;
    }
    cout<<n<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}