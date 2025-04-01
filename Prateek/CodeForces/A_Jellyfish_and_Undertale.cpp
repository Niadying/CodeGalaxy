#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long>time(n);
    for(long long i = 0; i<n; i++){
        cin>>time[i];
    }

    long long timeleft = b-1;

    for(long long i = 0; i<n; i++){
        if(a>=time[i]+1){
            timeleft+=time[i];
        }
        else timeleft+=a-1;
    }
    cout<<timeleft+1<<endl;
}

int main (){
    int y;
    cin>>y;
    while(y--){
        solve();
    }
}