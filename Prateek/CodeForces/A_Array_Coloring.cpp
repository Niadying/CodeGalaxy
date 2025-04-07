#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    int odd = 0;
    int even = 0;
    vector<int>color(n);
    for(int i = 0; i<n ;i++){
        cin>>color[i];
        if((color[i]&1)==0){
            even++;
        }
        else odd++;
    }

    if(odd == 0){
        if(even>=2){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    else{
        if(odd%2==0) cout<<"YES";
        else cout<<"NO";
    }
    cout<<endl;
    
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}