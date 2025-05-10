#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string s,sub;
    cin>>s>>sub;
    int ans = 0;

        for(int i = 0; i<6; i++){
            int y = s.find(sub);
            if(y!=string::npos){
                cout<<ans<<endl;
                return;
            }
            s = s+s;
            ans++;
        }
        int y = s.find(sub);
        if(y!=string::npos){
            cout<<ans<<endl;
            return;
        }
        cout<<-1<<endl;return;
    }

int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}