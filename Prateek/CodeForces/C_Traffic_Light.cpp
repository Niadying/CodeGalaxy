#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    char current ;
    cin>>current;
    string s;
    cin>>s;
    s+=s;
    ll start = 0;
    ll length = 0;
    ll maxi = 0;
    if(current == 'g'){
        cout<<0<<endl; return;
    }
    for(ll i=0; i<2*n; i++){
        if(s[i]==current){
            start = i;
            break;
        }
    }
    bool reached = false;
    for(ll i=start; i<2*n; i++){
        if(s[i]=='g'){
            maxi = max(maxi,length);
            length = 0;
            reached = true;
        }
        if(reached == true){
            if(s[i]==current){
                reached = false;
                length = 0;
            }
        }
        if(!reached)
        length++;
        // maxi = max(maxi,length);
    }
    cout<<max(maxi,length)<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}