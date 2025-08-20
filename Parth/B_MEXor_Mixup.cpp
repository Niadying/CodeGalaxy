// #include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
// using ll = long long;

void solve() {
    int a,b;
    cin>>a>>b;
    // if(a==2 && b==1) cout<<2<<endl;
    // else if (a==1 && b!=1) cout<<2<<endl;
    // else cout<<3<<endl;

    if(a==1 && b==1) cout<<3<<endl;
    else if(a==b && a!=1) cout<<a<<endl;
    else if(a>b) cout<<a<<endl;

   else{
    cout<<1+a<<endl;
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

