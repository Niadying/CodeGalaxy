// #include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
using ll = long long;

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    vector<ll> ans ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int rem;
    
    for(int i =0;i<n;i++){
        rem = arr[i]%k;
        ans.push_back(rem);      
    }

        for (int i =0;i<n;i++){
            if (ans[i]==0){
                cout<<i+1<<" ";
                
            }
        }

        for(int i=0;i<n;i++){
            cout<<
        }
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