#include<bits/stdc++.h>
using namespace std;

void solve (){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    int maxi = 0;
    int ans1 = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='.'){
            count++;
            ans1++;
        }
        else count = 0;
        maxi = max(count,maxi);
    }
    if(maxi<3){
        cout<<ans1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}