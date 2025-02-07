#include<iostream>
using namespace std;

int fact(int a ){
    if(a==0||a==1) return 1;
    return a*fact(a-1);
}
int term(int b,int a){
    return fact(a)/(fact(b)*fact(a-b));
}


int main(){
    cout<<"Enter the number of rows you wnt to print: \n";
    int rows;
    cin>>rows;
    for(int i=0;i<rows ;i++){
        for (int j=0;j<rows-i;j++)cout<<" ";
        for(int j=0;j<=i;j++)cout<<term(j,i)<<"  ";
        cout<<endl;
    }
    int a ,b;
    
}