// #include<iostream>
// using namespace std; 

//     int main(){

// //******************/ BITWISE OPERATOR***************** 
//         int a = 4; 
//         int b = 6; 

//         cout<<"a&b "<< (a&b)<<endl; // AND OPERATOR
//         cout<<"a|b "<< (a|b)<<endl; // OR OPERATOR
//         cout<<"a~b "<< (~b)<<endl; // NOT OPERATOR
//         cout<<"a^b "<< (a^b)<<endl; // XOR OPERATOR
 

//         // RIGHT SHIFT OPERATOR

//         cout<<(17>>2);  // DIVIDES THE NUMBER BY 2 JITNE TIMES USE KIYA HO..

//         // LEFT SHIFT OPERATOR

//         cout<<(156<<2); // MULTIPLIES THE NUMBER BY 2 JITNE TIMES USE KIYA HO..

//         //  +VE NUMBER M HAMESHA 0 ADD HOTA HAI SHIFT USE KRTE HUE BUR -VE NUMBER MAI CONPILEER DEPENDENT HOTA HAI...

//         // BADE NUMBER K CASE MAI NUMBER KO NEGATIVE BNA DETA HAI... 

//         return 0;
//     }

#include <bits/stdc++.h>
using namespace std;

int main() {

    int T,N,arr[100000],penalty;
    cin>>T;
    for(int j = 0; j<T; j++){
        
        cin>>N;
      
        
        for(int i = 0; i<N; i++){
            cin>>arr[i];
        }
        
        int max = arr[0];
        for(int i = 0; i<N ; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        
        
            int temp1=0;
            penalty = 0;
        for(int i = 1; i<=N; i++){
            int index = i; 
            if(index<=max){ 
                
            for(int k = 0; k<N; k++){
                
                if(arr[k]==i){
                    temp1 = k+1;
                }
              
            }
            penalty = temp1 + penalty;
            
        }
        }       
        cout<<penalty<<endl;
        
    }

}

