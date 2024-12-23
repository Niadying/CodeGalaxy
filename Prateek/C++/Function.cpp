// #include<iostream>
// using namespace std; 

// int power(){
//     int a, b;
//     cin>>a>>b;
//     int ans = 1; 
//     for(int i = 1; i<=b; i++){

//         ans = ans*a;
//     }
//     return ans;
// }

//     int main(){

//         int a ,b;
//         cin>>a>>b;

//         int answer = power();
//         cout<<answer<<endl;
    

//     return 0;
// }

// EVEN/ODD************

// #include<iostream>
// using namespace std; 

// int EO(int a){

//         if(a%2==0){
//             cout<<"EVEN";

//         }
//         else{
//             cout<<"ODD";

//         }
//         return 0;

// }


//     int main(){
//         int a;
//         cin>>a;
//         EO(a);
//         // cout<<ans;
    
//     return 0;
// }


// nCr****************

// #include<iostream> 
// using namespace std;

// int factorial (int n){

//     int fact = 1;
//     for(int i = 1; i<=n; i++){

//         fact = fact * i;

//     }
//     return fact;
// }
// int ans(int n, int r){

//     int num = factorial(n);
//     int denominator = factorial (r) * factorial (n-r);

//     return num/(denominator);

// }
// int main(){

//     int  n,r;

//     cout<<"Enter the value of n : ";
//     cin>>n;

//     cout<<"Enter the value of r : ";
//     cin>>r;

//     cout<<"nCr of given values is : "<<ans(n,r);


// }



// COUNTING************

#include<iostream>
using namespace std;

int count(int n){

    for(int i = 1; i<=n; i++){

        cout<<i<<" ";
    }
    return 0;  // CAN USE VOID INSTEAD OF INT & CAN AVOID TO USE return 0; ******
}

int main(){

    int n;
    cout<<"Enter the number till you want counting : ";
    cin>>n;

    count(n);



}
