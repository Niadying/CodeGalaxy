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
#define all(x) (x).begin(), (x).end()        
#define sz(x) ((int)(x).size())
#define fi first                           
#define se second                          
#define mp make_pair                       
#define pb push_back                      
#define eb emplace_back                   
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define per(i,a,b) for(int i=(a); i>=(b); --i)



ll gcd(ll a, ll b) { 
    return b ? gcd(b, a % b) : a;
}

void solve(){
    ll n;
    cin>>n;
    vll nums1(n), nums2(n);
    rep(i,0,n) cin>>nums1[i];
    rep(i,0,n) cin>>nums2[i];
    map<ll,ll>mpp1;
    map<ll,ll>mpp2;
    rep(i,0,n){
        mpp1[nums1[i]]++;
        mpp2[nums2[i]]++;
    }
    ll cntMaxi1 = 0, numMaxi1 = 0;
    ll cntMaxi2 = 0, numMaxi2 = 0;
    for(auto it:mpp1){
        // if(it.fi > )
    }
}

int main(){
    ios::sync_with_stdio(false); 
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

