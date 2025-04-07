#include<bits/stdc++.h>
using namespace std;

using ll = long long;
void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    int cnt = 0;
    int streak = 0;
    vector<int>cntt;
    for(int i = 1; i<n; i++){
        if(s[i]=='<' && s[i-1]=='>'){
            cnt+=2;
            i++;
            streak++;
        }
        if(s[i]=='>' && s[i-1]=='<') {
            cnt+=2;
            i++;
            streak++;
        }
        else{
            
        }
    }
    cout<<n-cnt+1<<endl;
}

int main (){
    int y;
    cin>>y;
    while(y--) solve();
}