#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main (){
    string s;
    cin>>s;
    int n = s.length();
    int cnt0 = 0, cnt1 = 0, maxi = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='0'){
            cnt0++;
            maxi = max(cnt1,maxi);
            cnt1 = 0;
        }
        else{
            cnt1++;
            maxi = max(cnt0,maxi);
            cnt0 = 0;
        }
    }
    maxi = max(maxi, max(cnt0,cnt1));
    if(maxi>=7) cout<<"YES";
    else cout<<"NO";
    cout<<endl;

}