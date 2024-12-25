#include<iostream>
using namespace std; 

    int main(){
        
    int n; 
    cout<<"Enter the number : "; 
    cin >> n;
    
    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";
    for (int k = 1; k<=n; k++){

        int next = a+b;
        cout<<next<<" "; 

        a = b; 
        b = next;


    }





    return 0;
}           