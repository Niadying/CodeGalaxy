#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second";
    }
    else cout<<"First";
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}