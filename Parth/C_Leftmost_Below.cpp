// #include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--){
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i=0;i<n;i++) cin >> b[i];

        long long mn = b[0];
        bool ok = true;

        if (mn == 0){
            for (long long x : b) {
                if (x != 0) {
                    ok = false;
                    break;
                }
            }
        }
         else {
            for (int i= 1; i<n && ok;i++){
                if(mn == 0){
                    if (b[i] != 0) {
                        ok = false;
                        break;
                    }

                } 
                else if (b[i] > 2 * mn - 1) {
                    ok = false;
                    break;
                }

                mn = min(mn,b[i]);
            }
        }

        cout << (ok ? "YES\n": "NO\n");
    }
    return 0;
}