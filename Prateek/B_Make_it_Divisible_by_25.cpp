#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    int cnt = 0;
    int lastdigit = n%10;
    bool found5 = false;
    bool found0 = false;
    while(n!=0){
        n = n/10;
        int secondlast = n%10;
        if(lastdigit==0){
            if(secondlast==0 || secondlast==5){
                cout<<cnt<<endl; 
                return ;
            }
            else{
                cnt++;
            }
        }
        else if (lastdigit == 5){
            if(secondlast == 0 || secondlast == 7){
                cout<<cnt<<endl; return;
            }
            else if (secondlast == 5){

            }
        }

    }
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        cout<<"Y : "<<y<<endl;
        solve();
    }
}