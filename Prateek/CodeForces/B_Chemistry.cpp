#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>freq;

    if(n==1){
        cout<<"YES"<<endl; return;
    }
    for(int i = 0; i<n; i++){
        freq[s[i]]++;
    }
    int odd = 0;
    int even=0;
    for(auto i:freq){
        if((i.second)%2 == 1){
            odd++;
        }
        else even++;
    }

    if(odd>k){
        if(odd-k == 1){
            cout<<"YES"<<endl; return;
        }

        cout<<"NO"<<endl; return;
    }

    else{
        if(odd==k){
            cout<<"YES"<<endl;return;
        }
        if(k>odd){
            cout<<"YES"<<endl; return;
        }
        cout<<"NO"<<endl ;
    }


    
    
}
int main (){
    int y;
    cin>>y;
    while(y--){
        solve();
    }
}