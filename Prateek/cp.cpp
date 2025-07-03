#include <bits/stdc++.h> // CODEFORCES
using namespace std;

// Common type aliases
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

// Macros for convenience
#define all(x) (x).begin(), (x).end()        // shorthand for begin/end:contentReference[oaicite:1]{index=1}
#define sz(x) ((int)(x).size())
#define fi first                           // shorthand for pair.first:contentReference[oaicite:2]{index=2}
#define se second                          // shorthand for pair.second:contentReference[oaicite:3]{index=3}
#define mp make_pair                       // shorthand for make_pair:contentReference[oaicite:4]{index=4}
#define pb push_back                       // shorthand for push_back:contentReference[oaicite:5]{index=5}
#define eb emplace_back                    // shorthand for emplace_back
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define per(i,a,b) for(int i=(a); i>=(b); --i)


// Utility functions
ll gcd(ll a, ll b) { // greatest common divisor
    return b ? gcd(b, a % b) : a;
}

void solve(){

}

int main(){
    ios::sync_with_stdio(false); // fast I/O:contentReference[oaicite:11]{index=11}
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    // For local testing: redirect input/output to files
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
