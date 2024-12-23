#include<iostream>
using namespace std; 

    int main(){
        int n;
        cout<<"Enter the number : ";
        cin>>n;
        n = -n;
        int m = 1;
        int ans = 0;


        for(int i = 1; n!=0; i++){

             int y = n%2;
             ans = ans + y*m;
             m = m*10;
             n = n/2;

        }
        ans = ans + m;
        cout<<"The answer is : "<<ans;

        
    
    return 0;
}