#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack <char> temp;
    for(int i = 0; i<s.size(); i++){
            if(temp.empty()) temp.push(s[i]);
            else if(s[i]=='}'){
                if(temp.top()=='{'){
                    temp.pop();
                }
                else return false;
            }
            else if (s[i]==']'){
                if(temp.top()=='['){
                    temp.pop();
                }
                else return false;
            }
            else if (s[i]==')'){
                if(temp.top()=='(') temp.pop();
                else return false;
            }
            else{
                temp.push(s[i]);
            }
        }
        if(temp.empty()) return true;
        return false;
}
int main (){
    string s = "[]{}()";
    cout<<isValid(s);
}