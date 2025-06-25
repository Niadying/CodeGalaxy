#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    ll n;
    cin>>n;
    deque<int>digits;
    bool poss = false;
    ll z = n;
    while(z){
        int temp = z%10;
        digits.push_back(temp);
        z/=10;
    }

    reverse(digits.begin(),digits.end());


    while(!poss){

        bool hello = true;
        for(auto i:digits){
            // cout<<i<<" ";
            if(i==0) continue;
            if(n%i!=0){
                hello = false;
                n++;
                break;
            }
        }
        // cout<<endl;
        if(hello) break;

        bool needed = true;
        for(ll j = digits.size()-1; j>=0 && needed; j--){
            if(needed){
                digits[j]++;
                if(digits[j]==10){
                    digits[j]=0;
                }
                else needed = false;
            }
        }
        if(digits[0]==10) {
            digits[0] = 0;
            digits.push_front(1);
        }
    }
    cout<<n<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}