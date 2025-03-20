#include <bits/stdc++.h>
using namespace std;


void solve ()
{
 
 int n ,k;
 cin>>n>>k;
 int arr[n];
 for (int i =0;i<n;i++){
    cin>>arr[i];
 }

 if(is_sorted(arr,arr+n) || k > 1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
 


}




int main(){

 int t;
 cin>>t;
 while (t--){
  solve();
 }
 return 0;
}