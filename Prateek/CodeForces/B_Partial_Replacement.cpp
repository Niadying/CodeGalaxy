#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt = 0;
    vector<int>temp;
    vector<int>temp2;
    if(n==1){
        if(s[0]=='*')cout<<1<<endl;
        else cout<<0<<endl;
        return; 
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='*'){
            cnt++;
            s[i]='x';
            temp.push_back(i);
            break;
        }
    }
    for(int i = n-1; i>=0; i--){
        if(s[i]=='*'){
            cnt++;
            s[i]='x';
            temp.push_back(i);
            break;
        }
    }
    if(temp.size()==1){
        cout<<1<<endl; return;
    }
    int hello = abs(temp[0]-temp[1]);
    if(hello>=k){
        cout<<cnt<<endl; return;
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='*'){
            temp2.push_back(i);
        }
    }

    for(int i = 0; i<temp2.size(); i++){

    }
    cout<<cnt<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}