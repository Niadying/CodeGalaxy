#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll cnt = 0;
    int lastdigit = n%10;
    bool find50 = false;
    bool find0_5 = false;
    while(n!=0){
        n=n/10;
        ll secondlast = n%10;
        if(lastdigit == 0){
            if(secondlast == 5 || secondlast == 0){
                if(find50)
                cout<<cnt-1<<endl; 
                else cout<<cnt<<endl;
                return;
            }
            else{
                cnt++;
            }
        }
        else if (lastdigit == 5){
            if(secondlast == 2 || secondlast == 7){
                if(find50)
                cout<<cnt-1<<endl; 
                else cout<<cnt<<endl;
                return;
            }
            if(secondlast == 0){
                find50 = true;
                cnt++;
            }
            else if (find50 && (secondlast == 5 || secondlast == 0) ){
                cout<<cnt<<endl; return;
            }
            else cnt++;
        }
        else{
            lastdigit = secondlast;
            cnt++;
        }
    }
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        // cout<<"Y : "<<y<<endl;
        solve();
    }
}