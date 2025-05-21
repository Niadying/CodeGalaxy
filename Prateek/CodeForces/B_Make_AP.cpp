#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    double a,b,c;
    cin>>a>>b>>c;
    double m1,m2,m3;
    m1 = ((2*b)-c)/a;
    m3 = ((2*b)-a)/c;
    m2 = (a+c)/(2*b);
    if(( m1>0 && (m1==(int)m1))||(m2>0 && (m2==(int)m2))|| (m3>0 && (m3==(int)m3))) cout<<"YES";
    else cout<<"NO";
    cout<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}