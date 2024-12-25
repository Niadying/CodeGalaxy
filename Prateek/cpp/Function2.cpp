// #include<iostream>
// using namespace std;

// bool isprime(int n){

//     bool k = 1;
//     for(int i = 2; i<=n-1; i++){

//     if (n%i==0){

//             k = 0;
//             break;
//         }
//     }
//     return k;
// }
//     int main(){

//         int n;
//         cout<<"Enter the number : ";
//         cin>>n;
//         bool y =isprime(n);
//         cout<<y;

//     }



// #include<iostream>
// using namespace std;

// int ap(int n){
    
//     int ans = (3*n)+7;
//     return ans;

// }

// int main(){

//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int sol = ap(n);
//     cout<<sol;
// }



// CALCULATE TOTAL NUMBER OF SETBITS IN GIVEN 2 NUMBERS (NO. OF 1 IN BINARY FORM)*********************


// #include<iostream>
// using namespace std;

// int setbit(int n){

//     int count = 0;
//     for(int i = 1; n!=0; i++){

//         if(n&1!=0){
//             count++;
//         }
//       n =  n>>1;
//     }
//     return count;

// }

// int main(){

//     int a,b;

//     cout<<"Enter the value of a : ";
//     cin>>a;

//     cout<<"Enter the value of b : ";
//     cin>>b;


//     int ans = setbit(a)+setbit(b);
//     cout<<ans;

    // return 0 ;


// }




// FIBBONACCI SERIES*************

#include<iostream>
using namespace std;

void fibo(int n){

    int a = 0;
    int b = 1;
    cout<<0<<1;
    
    for(int i = 1; i<n-1; i++){


        int sum = a+b;
        cout<<sum;
        a = b;
        b = sum;

    }
}
    

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    fibo(n);

    return 0;

}