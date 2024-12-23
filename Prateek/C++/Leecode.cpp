#include<iostream>
using namespace std; 

    int main(){

        // Question 1*************
    
//     int n ; 
//     cout<<"Enter the 3 digit number : "; 
//     cin>>n;
//     int y = 0;
//     int i =1;
//     int z = 1;

//     while (n!=0){

//         int s = n%10; 
//         z = z*s;
//         y = y+s;
//         n=n/10;

//     }


//     // cout<<z<<endl<<y<<endl;
// cout<<z-y;


// Question 2**********

// int a ;

// cin>>a;
// int  j = 0;

// for (int i = 1; i<=32; i++){

//     if (a%2!=0){

//         j++;
//     }
//     a = (a>>1);

    

// }
// cout<<j;

// *********QUESTION 3*********

int n ;
cout<<"Enter the integer : ";
cin>>n;
int ans = 0;
int m =1;

for(int i = 1; n!=0; i++){

    int y = n%10;
    ans = ans*m+y;

    m = m*10;


    n = n/10;

}
cout<<ans;



    return 0;
}   