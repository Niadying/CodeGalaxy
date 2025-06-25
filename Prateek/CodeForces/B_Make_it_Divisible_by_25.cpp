#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll cnt = 0;
    int lastdigit = n%10;
    bool find50 = false;
    while(n){
        n/=10;
        int secondlast = n%10;
        if(lastdigit == 0){
            if(secondlast == 5 || secondlast == 0){
                if(find50==false)
                cout<<cnt<<endl;
                else cout<<cnt-1<<endl; return;
            }
            else cnt++;
        }
        else if(lastdigit == 5){
            if((secondlast == 5 || secondlast == 0) && find50){
                cout<<cnt<<endl; return;
            }
            else if(secondlast == 2 || secondlast == 7){
                cout<<cnt<<endl;
                return;
            }
            else if (secondlast == 0){
                find50 = true;
                cnt++;
            }
            else cnt++;
            
        }
        else{
            cnt++;
            lastdigit = secondlast;
        }
        
    }

    cout<<"NOT"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        // cout<<"Y : "<<y<<endl;
        solve();
    }
}