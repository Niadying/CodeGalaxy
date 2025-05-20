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
    int j = 0;
    string temp="";
    for(int i = 0; i<n; i++){
        if(freq.find(s[i])!=freq.end()) temp+=s[i];
    }
    n = temp.size();
    // cout<<temp<<endl;
    unordered_map<int,char>mpp;
    for(int i = 0; i<n; i++){
        if(temp[i]==t[j] && mpp.find(t[j])==mpp.end()){
            j++;
            mpp[temp[i]]++;
        }
        else if (mpp.find(t[j])!=mpp.end()){
            cout<<"NO"<<endl; return;
        }
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