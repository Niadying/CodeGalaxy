#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;

int main (){
    ll n; 
    cin >> n;  
    if(n==0) return 0;
    if(n==1){
        cout<<1; return 0;
    }  
    if(n>=2){
    ll a = 0;
    ll b = 1;
    cout<<b<<" ";
    for (ll k = 1; k<=n-1; k++){

        ll next = a+b;
        ll temp = next;
        ll sum = 0;
        while(temp!=0){
            sum+=(temp%10); 
            temp = temp/10;
        }
        cout<<sum<<" ";

        a = b; 
        b = next;

    }
    }
}