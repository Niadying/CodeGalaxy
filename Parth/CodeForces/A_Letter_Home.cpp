// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;

void solve() {
    int n,s;
    cin>>n>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());
    int ans= max (maxi, s) - min(mini, s);
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}