#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>>nums(10,vector<char>(10));
    int sum = 0;
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            cin>>nums[i][j];
        }
    }

    for(int row = 0; row<10; row++){
        for(int col = 0; col<10; col++){
            int a = row+1;
            int b = col+1;
            if(a>5){
                int z = row%5;
                a = a - (z*2) + 1;
            }
            if(b>5){
                int z = row%5;
                b = b - (z*2) + 1;
            }
            if(nums[row][col]=='X'){
                if(row == 0 || col == 0 || row == 9 || col == 9) sum+=1;
                else if(row == 1 || col == 1 || row == 8 || col == 8) sum+=2;
                else if(row == 2 || col == 2 || row == 7 || col == 7) sum+=3;
                else if(row == 3 || col == 3 || row == 6 || col == 6) sum+=4;
                else if(row == 4 || col == 4 || row == 5 || col == 5) sum+=5;
                
            }
        }
    }
    cout<<sum<<endl;
}

int main (){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}