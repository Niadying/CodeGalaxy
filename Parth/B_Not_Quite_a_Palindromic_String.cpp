#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    for (int i=0;i<n;i++ ){
        if (s[i] == '0') cnt0++;
        else cnt1++;
    }

    int maxp = n / 2;


    int v=maxp-k;


    if (v<0 || v>min(cnt0,cnt1)){
        cout << "NO"<<endl;
        return;
    }


    int rem0 = cnt0-v;
    int rem1 = cnt1-v;


    int ans = (rem0/2)+(rem1/2);

    if (ans >= k) {
        cout <<"YES"<<endl;
    }

     else {
        cout <<"NO"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}