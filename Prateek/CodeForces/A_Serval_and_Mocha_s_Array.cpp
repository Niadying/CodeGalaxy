#include<iostream>
#include<vector>
#include <numeric>
#include <algorithm>
using namespace std;




void solve(){
  int n;
  cin>>n;
  vector<int> arr(n);
  bool ans =false;
  for (int i =0;i<n;i++){
    cin>>arr[i];
  }
  for (int i =0;i<n;i++){
    for (int j= i+1;j<n;j++){
        if (__gcd(arr[i],arr[j])<=2){
            ans = true;
        } 
    }
  }

  if (ans==true){
    cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;

  
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