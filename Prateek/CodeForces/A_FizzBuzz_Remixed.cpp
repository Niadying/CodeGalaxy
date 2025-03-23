#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long y;
    cin>>y;
    if(y<3){
        cout<<y+1<<endl;
        return;
    }
    int quet = y/15;
    int rem = y%15;
    int ans = quet*3;
    if(rem==0){
        ans+=1;
    }
    else if (rem == 1){
        ans +=2;
    }
    else ans+=3;
    cout<<ans<<endl;


}
int main(){
    long long n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
}