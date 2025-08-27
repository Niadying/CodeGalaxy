// #include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    bool ans = false;
    int cnt0=0;
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(ll i=0;i<n;i++){
        ll power = log2(i);
        for(int j=i+1;j<n;j++){
            if (arr[j]>= 0 && arr[j]<power) cnt++;
            if (arr[j]==0) cnt0++;
          
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
