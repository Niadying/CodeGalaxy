#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>

using namespace std;
using ll = long long;

void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> arr(n);
    int cns=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort (arr.begin(),arr.end());
    ll var=-1;

   
    
while(!arr.empty()){
    // for(int i =0;i<arr.size();i++){
    //     if(arr[i]>c){
    //         var=i;
         
    // }

     auto it=upper_bound(arr.begin(),arr.end(),c);

    if(it == arr.begin()){
        cns+=1;
         arr.erase(arr.begin());

    }
    else{
        arr.erase(it-1); bjb j.
    }

    for(int i=0;i<arr.size();i++){
        arr[i]*=2;
    }
}

    cout<<cns<<endl;


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

