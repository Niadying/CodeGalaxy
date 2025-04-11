#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int low = 0; 
    int high = n-1;
    while(low<=high){
        if(s[low++]==s[high--]){
            break;
        }
        else{
            n-=2;
            
        }
    }
    cout<<n<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}