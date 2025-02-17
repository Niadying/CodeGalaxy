// 1. transpose the matrix and show 
// 2. factorial using recursion 
// 3.check if a string is opoalindriome or nit 
#include<bits/stdc++.h>
using namespace std;

int fact (int a){
    if(a==1||a==0)return 1;
    else return fact(a-1)*a;
}

void transpose(vector<vector<int>>a){
    int row= a.size();
    int column=a[0].size();
    cout<<"the size of the matrix is" <<row<<"x"<<column<<endl;
    
    vector<vector<int>> temp(column,vector<int>(row));
    
    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            temp[j][i]=a[i][j];
        }
    }
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
void palindrome (string s,int start=0,int end=-1,bool TF=true ){
    if (end==-1) end=s.length()-1;
    if(start>=end){
        if(TF)cout<<"Yes,it is a plaindrome";
        else cout<<"NO,it's not ";
        return;
    }
    if(s[start]!= s[end]) TF=false;
    palindrome(s,start+1,end-1,TF);
}





int main (){
    cout<<"Enter the required number for which you have to find the factorial "<<endl;
    int xx;
    cin>>xx;
    cout<<fact(xx)<<endl;
    
    
    cout<<"Enter size of the  matrix : ";
    int a,b;
    cin>>a>>b;
    cout<<"Enter the matrix : ";
    vector<vector<int>> matrix;
    for(int i=0;i<a;i++){
        vector<int>tempa;
        for(int j=0;j<b;j++){
            int temp;
            cin>>temp;
            tempa.push_back(temp);
        }
        matrix.push_back(tempa);
    }
    
    transpose(matrix);
    
    
    cout<<"Emnter the string :";
    string s ;
    cin>>s;
    palindrome(s);
}