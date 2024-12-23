// #include<iostream>
// using namespace std; 

//     int main(){
//     int n;
//     cin>>n;

//     for(int i =1; i<=n; i++){
//     int m = i;

//         for(int k = i; k<n; k++){

//             cout<<" ";
//         }
//         for(int j = 1; j<=i; j++){

//             cout<<m;
//             m--;

//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std; 

//     int main(){
    
//     int n;
//     cin>>n;
//     char c = 'A';
//     for(int i = 1; i<=n; i++){


//         for(int k = i; k<n; k++){

//             cout<<" ";
//         }
//     for(int j = 1; j<=i ; j++){
//         cout<<c;
//         c--;
        

//     }
// //    cout<< endl;
//    c=c+i+1;
//    char y = 'B';

//    for(int l = 2; l<=i; l++){

//     cout<<y;
//     y++;
//    }
//    cout<<endl;
    


// }
//     return 0;
//     }

// #include<iostream>
// using namespace std; 

//     int main(){
//     int n;
//     cin>>n;

//     for(int i = 1; i<=n; i++){

//         for(int k = 1; k<i; k++){

//             cout<<" ";
//         }
//         for(int j=i; j<=n; j++){

//             cout<<"*";
//         }
//        for(int l = i; l<n; l++){
//         cout<<"*";
//        }
//         cout<<endl;

//     }
//     return 0;
// }


#include<iostream>
using namespace std; 

    int main(){
        int n ;
        cout<<"Enter the integer : ";
        cin>>n;
    
    for(int i  = 1; i<=n; i++){
        char m = 'A';
        

        for(int j = 1; j<=n-i+1; j++){

            cout<<m;
            m = m+1;
        }
        for(int k = 1; k<i-1; k++){

            cout<<" ";
        }
        for(int c = 2; c<n; c++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}