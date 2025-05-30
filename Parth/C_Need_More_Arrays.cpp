// #include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt =1;
    int last = arr[0];

    for (int i=1;i<n;i++){
        if(arr[i]>last+1){
            cnt++;
            last = arr[i];
        }
    }

    cout <<cnt<<endl;
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