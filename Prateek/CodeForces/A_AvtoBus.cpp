#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll temp = n; 
    ll min2 = 0, min3 = 0, max2 = 0, max3 = 0;
    ll maxi = 0;
    ll mini = 0;
    if((n&1)==1){
        cout<<-1<<endl; return;
    }
    if(n==2){
        cout<<-1<<endl;
        return;
    }

    if(n%4==0){
        maxi = n/4;
        if(n%6==0){
            mini = n/6;
        }
        else if (n%6==2){
            mini = (n/6)-1+2;
        }
        else if (n%6==4){
            mini = (n/6)+1;
        }
    }
    else if (n%4==2){
       
        if(n%6==0){
            mini = n/6;
            maxi = (n/4);
        }
        else if (n%6==2){
            mini = (n/6)+1;
            maxi = (n/4);
        }
        else if (n%6==4){
            mini = (n/6)+1;
            maxi = n/4;
        }
    }
    cout<<mini<<" "<<maxi<<endl;


}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}