#include<bits/stdc++.h>
using namespace std;
bool IsPerfect(int n){
    if(n==1) return true;
    for(long long i = 0; i<n/2; i++){
        if(i*i == n) return true;
    }
    return false;
}
void solve(){
    long long n;
    cin>>n;
    vector<long long>temp(n+1);
    vector<long long>ans;
    int sum = 0;
    for(int i = 0; i<=n; i++){
        temp[i] = i;
    }
    for(int i = 1; i<=n ;i++){
        sum+=temp[i];
        if(IsPerfect(sum)){
            sum-=temp[i];
        }
        else{
            ans.push_back(temp[i]);
            temp[i]=0;
            i=1;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main (){
    int y;
    cin>>y;
    while(y--){
        solve();
    }
}