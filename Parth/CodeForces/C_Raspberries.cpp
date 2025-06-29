// #include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
using ll = long long;

void solve() {
    ll n,k;
    ll prod=1;

    ll maxi=-1;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i =0 ;i<n;i++){
        cin>>arr[i];

    }

    ll cnt0 =0;
    ll cnt1 =0;
    ll cnt4 =0;
    ll mini=INT_MAX;
    ll ans=0;

    for(int i =0 ;i<n;i++){
        if(arr[i]%2 ==0) cnt0++;
         if(arr[i]%2 ==1) cnt1++;
          if(arr[i]%4 ==0) cnt4++;
    }


    if(k!=4){
        for (int i=0;i<n;i++){
            if (arr[i]%k==0){
                ans++;
            } 
            else{
                mini = min(mini, k - arr[i] % k);
            }
        }

        if (ans == 0) {
            cout << mini<< endl;
        } 
        else {
            cout << 0 << endl;
        }
    }

    else{

        for(int i =0;i<n;i++){
            mini = min(mini, k - arr[i] % k);
        }

        if(cnt4>0 || cnt0>=2){
            cout<<0<<endl;
        }
        else{
            if (cnt0==0){
                cout<< min(mini,2ll)<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }

    }




    // if(prod%k==0){
    //     cout<<"0"<<endl;
    // }


    
    // else{
    //     for(int i =0;i<n;i++){
    //         ans= arr[i]%k;
    //         maxi= max(maxi,ans);

    //     }
    //     if( k==4 && cnt0>=2) cout<<0<<endl;
    //     else if(k==4 && cnt1>=1 && cnt0 >=1) cout<<1<<endl;
    //     else if(k==4 && k-maxi==1)cout<<1<<endl;
    //     else if (k==4  && cnt1>=2 ) cout<<2<<endl;
    //     else cout<<k-maxi<<endl;
    // }



   
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