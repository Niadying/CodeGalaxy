#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s,t;
    cin>>s>>t;
    unordered_map<char,int>freq;
    int n = s.length(), m = t.length();
    for(int i = 0; i<m; i++){
        freq[t[i]]++;
    }
    string temp="";
    for(int i = 0; i<n; i++){
        if(freq.find(s[i])!=freq.end()) temp+=s[i];
    }
    n = temp.size();
    // cout<<temp<<endl;
    unordered_map<char,int>mpp;
    for(int i = 0; i<t.length(); i++){
        mpp[t[i]]++;
    }
    string hello ="";
    int j = 0;
    for(int i = 0; i<n; i++){  
        if(hello==t){
            if(mpp.find(temp[i])!=mpp.end()){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if (j<m){
            if(temp[i]==t[j]){
                hello+=temp[i];
                j++;
            }
        }
    }
    if(hello!=t){
        cout<<"NO"<<endl; return;
    }
    cout<<"YES"<<endl;
    
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}