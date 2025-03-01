#include<iostream>
using namespace std;

int main(){
    int a,c;
    cin>>a;
    int b[a];

    for(int i=0;i<a;i++){
        cin>>b[i];
    }

   

    if(a%2==0){
        c=(b[a/2]+b[a/2 +1])/2;
    }
    else{
        c=b[a/2 ];
    }

    cout<<c;
}