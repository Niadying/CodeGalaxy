#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    int cnt = 0;
    int lastdigit = n%10;
    bool find50 = false; 
    while(n!=0){
        n = n/10;
        int secondlast = n%10;
        // cout<<"LAST : "<<lastdigit<<" SECOND: "<<secondlast<<endl;
        if(lastdigit==0 || find50){
            if(secondlast==0 || secondlast==5){
                cout<<cnt<<endl; 
                return ;
            }
            else if(find50){
                if(secondlast == 2 || secondlast == 7){
                cout<<cnt<<endl; return;
            }

            }
            else{
                cnt++;
            }
        }
        else if (lastdigit == 5 && !find50){
            if(secondlast == 0) find50=true;
            if(secondlast == 2 || secondlast == 7){
                cout<<cnt<<endl; return;
            }
            else{
                cnt++;
            }
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