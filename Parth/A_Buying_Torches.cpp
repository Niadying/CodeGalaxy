// #include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    ll ans=0;
    ll coal =0;
    ll cnt=0;
    ll stick=0;

    while(ans!=k){
        if(coal != y+2){
            stick = stick-1 +x;
            cnt++;
            

        }


    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
