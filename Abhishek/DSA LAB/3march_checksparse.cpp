
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    cout<<"Enter the elemets of the matrix";
    int zerocount=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                zerocount++;
            }
        }
    }
    if(zerocount>x*y/2){
        cout<<"The matrix is sparse";
    }
    else{
        cout<<"The matrix is not sparse";
    }
}
