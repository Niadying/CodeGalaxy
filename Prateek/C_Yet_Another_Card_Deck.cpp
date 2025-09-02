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
    ll n,q;
    cin>>n>>q;
    vll nums(n);
    vll query(q);
    rep(i,0,n) cin>>nums[i];
    rep(i,0,q) cin>>query[i];
    map<ll,vector<ll>>temp;
    for(int i = 0; i<n; i++){
        // if(temp.find(nums[i])==temp.end()){
            temp[nums[i]].pb(i+1);
        // }
    }
    map<ll,ll>mpp;

    for(auto it:temp){
        for(auto i:it.se){
            mpp[i] = it.fi;
        }
    }
    // for(auto it:mpp)
    // cout<<it.fi<<" "<<it.se<<" ";
    // cout<<endl;

    vll ans;
    ll prev = mpp[1];
    for(int i = 0; i<q; i++){
        prev = query[i];
        // cout<<"Query: "<<prev<<endl;
        bool poss = false;
        for(auto &it:mpp){
            if(it.se!=query[i]&&!poss){
                ll TEMP = it.se;
                it.se = prev;
                prev = TEMP;
            }else if (it.se==query[i]&&!poss){
                ans.pb(it.fi);
                it.se = prev;
                poss = true;
                // break;
            }
            // cout<<it.fi <<" "<< it.se<<" ";
        }
        // cout<<endl;
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;

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
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}

