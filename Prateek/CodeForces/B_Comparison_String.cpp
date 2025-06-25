#include<bits/stdc++.h>
using namespace std;

using ll = long long;
void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int streakgreater = 0, streaklesser = 0;
    int maxi1 = 0, maxi2 = 0;
    int cnt = 1;
    for(int i = 0; i<n; i++){
        if(s[i]=='<'){
            streakgreater++;
            maxi2 = max(maxi2, streaklesser);
            streaklesser = 0;
            if(streakgreater>maxi2 && streakgreater>maxi1){
                cnt++;
            }
        }
        else{
            streaklesser++;
            maxi1 = max(maxi1, streakgreater);
            streakgreater = 0;
            if(streaklesser>maxi1 && streaklesser>maxi2){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main (){
    int y;
    cin>>y;
    while(y--) solve();
}