#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string a,b;
    cin>>a>>b;
    ll start = 0 ;
    ll end = 0;
    ll start1 = 0, end1 =  0;
    bool isPossible = false;
    ll i = 0, j = 0;
    if(a.length()<b.length()){
        string temp = b;
        b = a;
        a = temp;
    }
    while(i<a.length()&&j<b.length()){
        if(a[i]==b[j] && !isPossible){
            start = i;
            start1 = j;  
            isPossible = true;
            i++;
        }
        else if(a[i]==b[j]){
            end = i++;
            end1 = j;
        }
        else if (isPossible && a[i]!=b[j]) break;
        j++;
    }
    ll ans = abs(start+start1)+abs(a.length()-end)+abs(b.length()-end1);
    cout<<ans<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}