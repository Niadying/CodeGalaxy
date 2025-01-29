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

int setbit (int n){
    int count = 0;
    while(n!=0){
        if(n&1 == 1){
            count++;
        }
        n>>1;
    }
    return count;
}

void check(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    vector<int>arr(v);
    
    for(int i = 0; i<n-1 ;i++){
        int first = v[i];
        int index1 = setbit(v[i]);
        for(int j = i+1; j<n; j++){
            int index2 = setbit(v[j]);
            int second = v[j];
            
            if(index1 == index2){
                if(first>second){
                swap(arr[i],arr[j]);
                }
            }
        }
    }
    bool sorted = true;
    for(int i = 0; i<n-1; i++){
        
        if(arr[i]>arr[i+1] ){
            sorted = false;
        }
    }
    if(sorted){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    check();
	}

}
