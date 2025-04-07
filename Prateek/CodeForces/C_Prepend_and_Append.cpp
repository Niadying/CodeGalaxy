#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int st0 = 0,st1=0,en1=0,en0=0;
    if((s[0]==0 && s[n-1]==0)|| s[0]==0 && s[n-1]==0){
        cout<<n<<endl; return;
    }
    if(s[0]==0){
        for(int i = 0; i<n; i++){
            if(s[i]==0){
                st0++;
            }
            else{
                break;
            }
        }
        for(int i = n-1; i>=0; i++){
            if(s[i]==1){
                en1++;
            }
            else break;
        }
    }
    else{
        for(int i = 0; i<n; i++){
            if(s[i]==1){
                st1++;
            }
            else{
                break;
            }
        }
        for(int i = n-1; i>=0; i++){
            if(s[i]==0){
                en0++;
            }
            else break;
        }
    }
    int ans0 = min(st0,en1);
    int ans1 = min(st1,en0);
    
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}