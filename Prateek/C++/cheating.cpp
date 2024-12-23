#include<iostream>
using namespace std; 

int fact (int n){
  
  if(n<=1){
    return 1;
  }
// int factorial = n*fact(n-1);
// return factorial;

return n*fact(n-1);
   } 

    int main(){
    // int n=1;
    // cout<<"Value of integer is : 1"<<endl;
    // // cin>>n;
    
    // int *pointer = &n;
    // int **pp = &pointer;
    // cout<<"Address of n is : "<<pointer<<endl;
    // cout<<"Address of n is : "<<&n<<endl;
    // cout<<"Address of pointer is : "<<pp<<endl;
    // cout<<"Address of pointer is : "<<&pointer<<endl;
    // cout<<"Value of n is : "<<n<<endl;
    // cout<<"Value of n is : "<<*pointer<<endl;
    // cout<<"Value of pp is : "<<*pp<<endl;
    // cout<<"Value of n is  : "<<*&n<<endl;
    // cout<<"Address of pp is :  "<<&pp<<endl;
    // cout<<"Value of n is : "<<**pp<<endl;

   int n;
   cout<<"Enter the value of integer : ";
   cin>>n;
   int ans  = fact(n);
   cout<<ans;

  
    return 0;
} 

