#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0, b = 0;
    bool isPossible = false;
    for(int i = 0; i<n-1; i++){
        if(s[i]>s[i+1]){
            char temp = s[i];
            a = i;
            b=i+1;
            s[i]=s[i+1];
            s[i+1]=temp;
            isPossible = true;
            break;
        }
    }
    if(isPossible) cout<<"YES"<<endl<<++a<<" "<<++b<<endl;
    else cout<<"NO"<<endl;
}
int main (){
    ll y = 1;
    while(y--){
        solve();
    }
}