#include <iostream>
#include<vector>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int cnt =0;
    for (int i=0;i<n;i++){
        if(arr[i]==0) cnt++;
    }

    if(cnt==n) cout<<0<<endl;
    else if(cnt==0) cout<<1<<endl;
    else{
    int f,l=0;

    for(int i =0;i<n;i++){
        if(arr[i]!=0) l=i;
    }

     for(int i =0;i<n;i++){
        if(arr[i]!=0){
            f=i;
            break;
        }
    }

    int ans=0;

    for(int i =f;i<=l;i++){
        if(arr[i]== 0) ans++;
    }

    if(ans==0){
         cout<<1<<endl;
    }
    else cout<<2<<endl;

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