#include<iostream>
using namespace std; 

    int main(){
    // *************QUESTION 4***********

// int n;
// cout<<"Enter the integer : ";
// cin>>n;
// int m = n;
// int mask = 0;
// if(n==0){

//     cout<<1;
// }
// else{
//     for(int i =1; m!=0; i++ ){

//     mask = (mask<<1)|1;
//     m=m>>1;


// }



// int ans = (~n)&mask;
// cout<<"Answer is : "<<ans;

// }


// *********QUESTION 5*********

int n ;
cout<<"Enter the number : ";
cin>>n;


for(int i = 1; (n%2==0)&&(n!=0);i++){


    n=n/2;

}
if(n==1){

    cout<<"True";


}
else{
    
cout<<"False";

}


    return 0;
}