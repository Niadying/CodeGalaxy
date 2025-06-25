#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int priority(char c){
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+'|| c=='-') return 1;
    return -1;
}

// INFIX TO POSTFIX

string Infix_Postfix(string s){
    ll i = 0;
    string ans = "";
    stack<char>st;
    while(i<s.length()){
        char temp = s[i];
        if((temp>='A'&&temp<='Z')||(temp>='a'&&temp<='z')||(temp>='0'&&temp<='9')){
            ans+=temp;
        }
        else if (temp=='(') st.push(temp);
        else if (temp==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while((!st.empty()) && priority(st.top())>=priority(s[i])){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()) {
        ans+=st.top();
        st.pop();
    }
    return ans;
}

// INFIX TO PREFIX

string Infix_Prefix(string s){
    reverse(s.begin(),s.end());
    for(ll i = 0; i<s.length(); i++){
        if(s[i]=='(') s[i]=')';
        else if (s[i]==')') s[i]='(';
    }

    string ans = "";
    stack<char>st;
    int i = 0;
    while(i<s.length()){
        char temp = s[i];
        if((temp>='A'&&temp<='Z')||(temp>='a'&&temp<='z')||(temp>='0'&&temp<='9')){
            ans+=temp;
        }
        else if (temp=='(') st.push(temp);
        else if (temp==')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(s[i]=='^'){
                while((!st.empty()) && priority(st.top())>=priority(s[i])){
                    ans+=st.top();
                    st.pop();
                }
            }
            else{
                while((!st.empty()) && priority(st.top())>priority(s[i])){
                    ans+=st.top();
                    st.pop();
                }
            }   
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()) {
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
     
}

// POSTFIX TO INFIX

string Postfix_Infix(string s){
    int i = 0; 
    stack<string>st;
    while(i<s.length()){
        char t = s[i];
        string temp = string(1,t);
        cout<<temp<<endl;
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
            st.push(temp);
        }
        else{
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            string t3 = '('+t2+s[i]+t1+')';
            st.push(t3);
        }
        i++;
    }
    return st.top();
}

// REFERE FOR MORE IN GFG (GEEKS FOR GEEKS) AND NOTES
int main (){
    string s = "a+b*(c^d-e)";
    string p = "(a+b)*c-d+f";
    string temp = Infix_Postfix(p);
    cout<<Postfix_Infix(temp)<<endl;
}