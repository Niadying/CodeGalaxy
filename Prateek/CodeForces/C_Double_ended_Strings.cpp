#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string a,b;
    cin>>a>>b;
    ll start = 0 ;
    ll end = a.length();
    ll start1 = 0, end1 =  a.length();
    bool isPossible = false;
    ll ans = abs(start+start1)+abs(a.length()-end)+abs(b.length()-end1);
    if(a.length()<b.length()){
        string temp = b;
        b = a;
        a = temp;
    }
    for(int k = 0; k<b.length(); k++){
        ll i = 0, j = k;
        start = 0 ;
        end = a.length();
        start1 = 0, end1 =  a.length();
        while(i<a.length()&&j<b.length()){
            if(a[i]==b[j] && !isPossible){
                start = i;
                start1 = j;  
                isPossible = true;
                j++;
            }
            else if(a[i]==b[j]){
                end = i;
                end1 = j;
                j++;
            }
            else if (isPossible && a[i]!=b[j]){
                ans = abs(start+start1)+abs(a.length()-end)+abs(b.length()-end1);ll start = 0 ;
                end = a.length();
                start1 = 0, end1 =  a.length();

            }
            i++;
        }
    }
    
    cout<<ans<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}