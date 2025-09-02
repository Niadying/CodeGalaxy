#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>

using namespace std;
// using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    string s=" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
    int ans =n/4;
    if(n<=4){
    for(int i=0;i<n;i++){
        s+= "R";
    }
}

else if(n%4 ==1){
    for(int i =0;i<(ans-1);i++){
        if(i%2 == 0) s+="RRRR";

        else s+="LLLL";
    }
    
    if(s.back() == 'R'){
    s+= "LLLRL";
    }
    else {
        s+= "RRRLR";
}
}

else if(n%4 ==2){
    for(int i =0;i<(ans-1);i++){
        if(i%2 == 0) s+="RRRR";

        else s+="LLLL";
    }

    if(s.back() == 'R'){
        s+="LL";
    }
    else s+="RR";
}

else {
    for(int i =0;i<(ans-1);i++){
        if(i%2 == 0) s+="RRRR";

        else s+="LLLL";
    }
if(s.back() == 'R'){
        s+="LLL";
    }
    else s+="RRR";
}

cout<<s<<endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

