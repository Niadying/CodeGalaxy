#include<iostream>
using namespace std; 

    int main(){
    
    int n; 
    cout<<"Enter the number : ";
    cin>>n;
    for (int i = 1; i <= n; i++){
    int y = n-i+1;

        for(int j = 1; j<=n-i+1; j++){

            cout<<j;
        }
        for (int j = 1; j<=i-1; j++){


        cout<<"**";
        }

        
        for (int k = 1; k<=n-i+1; k++){

            cout<<y;
            y--;

        }
        cout<<endl;
    }





    return 0;
}