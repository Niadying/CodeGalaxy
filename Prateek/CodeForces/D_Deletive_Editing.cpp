#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s , t;
    cin>>s>>t;
    unordered_map<char,int>freq;
    for(int i = 0; i<t.size(); i++){
        freq[t[i]]++;
    }
    

    // SELECTING ONLY WHICH CONTAINS THE CHARACTERS
    string temp="";
    for(int i = 0; i<s.length(); i++){
        if(freq.find(s[i])!=freq.end()){
            temp+=s[i];
        }
    }
    if(temp==t){
        cout<<"YES"<<endl;return;
    }


    // NEED TO CHECK BY DELETING
    ll j = 0;
    unordered_map<char,int>lastmap;
    for(int i = 0; i<temp.size(); i++){
        lastmap[temp[i]]++;
    }
    string last="";
    // cout<<temp<<" ";
    for(int i = 0; i<temp.size(); i++){
        if(temp[i]==t[j] && freq[t[j]]==lastmap[t[j]]){
            lastmap[t[j]]--;
            freq[t[j]]--;
            last+=t[j];
            j++;
        }
        else{
            lastmap[temp[i]]--;
        }
        // cout<<last<<" ";
    }
    // cout<<endl;
    if(last==t){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}

int main(){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}