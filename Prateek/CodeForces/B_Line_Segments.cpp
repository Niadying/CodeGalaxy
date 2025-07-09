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
    ll n;
    cin>>n;
    ll x,y,px,py;
    cin>>x>>y>>px>>py;
    vi nums(n);
    rep(i,0,n) cin>>nums[i];
    ld dist = sqrt(pow(x-px,2)+pow(y-py,2));
    ld sum = 0;
    sort(nums.rbegin(),nums.rend());
    ll j = n-1;
    // sum = nums[j];
    // per(i,n-2,0){
    //     if(sum-nums[i]>=0){
    //         sum-=nums[i];
    //     }
    //     else sum+=nums[i];
    // }
    ld maxi = nums[0];
    ld maxsum = accumulate(all(nums),1LL*0.0);
    sum = (2*maxi)-max(ld(0.0),maxsum);
    if(dist<=maxsum && dist>=sum)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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

