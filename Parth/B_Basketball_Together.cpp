// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, d;
    cin >> n >> d;
    vector<int> arr(n);

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    ll x = arr.size();
    ll res = 0;
    ll i = n-1;
    ll cnt = 0;

    sort(arr.begin(), arr.end());
    while (x >=0)
    {

        res = ceil(double((double)(d+1.0)/(double)arr[i]));
        i--;
        x -= res;

        if (x>=0) cnt++;

    }
    cout << cnt << endl;
}
