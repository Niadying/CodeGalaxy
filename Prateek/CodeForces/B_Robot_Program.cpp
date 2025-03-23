#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    long long cnt = 0;
    long long index = 0;
    for(long long i = 0; i<k; i++){
        if(s[index]=='L') x--;
        else x++;
        if(x==0){
            index = 0;
            cnt++;
        }
        else{
            index = (index + 1)%n;
        }

    }
    cout<<cnt<<endl;
}
int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}

