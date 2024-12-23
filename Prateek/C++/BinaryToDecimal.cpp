#include<iostream>
using namespace std; 

    int main(){

        int a ;
        cout<<"Enter the number : ";
        cin>>a;
        int ans = 0;
        int m = 1;

        for(int  i = 1; a!=0;i++){

                int y = a%10;
                ans = ans + y*m;

                a=a/10;
                m = m*2;

        } 
    
cout<<"The answer is : "<<ans;


    return 0;
}