#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin>>s;
    int ab = 0, ba = 0;
    for(int i = 0; i<s.length()-1; i++){
        if(s[i]=='a' && s[i+1]=='b') ab++;
        else if (s[i]=='b' && s[i+1]=='a') ba++;
    }
    if(ab>ba){
        int n = ab-ba;
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='a' && s[i+1]=='b'){
                s[i+1]='a';
                n--;
            }
            if(n==0){
                break;
            }
        }
    }
    else if (ba>ab){
        int n = ba-ab;
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='b' && s[i+1]=='a'){
                s[i+1]='b';
                n--;
            }
            if(n==0){
                break;
            }
        }
    }
    cout<<s<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}