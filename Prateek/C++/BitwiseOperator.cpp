#include<iostream>
using namespace std; 

    int main(){

//******************/ BITWISE OPERATOR***************** 
        int a = 4; 
        int b = 6; 

        cout<<"a&b "<< (a&b)<<endl; // AND OPERATOR
        cout<<"a|b "<< (a|b)<<endl; // OR OPERATOR
        cout<<"a~b "<< (~b)<<endl; // NOT OPERATOR
        cout<<"a^b "<< (a^b)<<endl; // XOR OPERATOR
 

        // RIGHT SHIFT OPERATOR

        cout<<(17>>2);  // DIVIDES THE NUMBER BY 2 JITNE TIMES USE KIYA HO..

        // LEFT SHIFT OPERATOR

        cout<<(156<<2); // MULTIPLIES THE NUMBER BY 2 JITNE TIMES USE KIYA HO..

        //  +VE NUMBER M HAMESHA 0 ADD HOTA HAI SHIFT USE KRTE HUE BUR -VE NUMBER MAI CONPILEER DEPENDENT HOTA HAI...

        // BADE NUMBER K CASE MAI NUMBER KO NEGATIVE BNA DETA HAI... 

        return 0;
    }
