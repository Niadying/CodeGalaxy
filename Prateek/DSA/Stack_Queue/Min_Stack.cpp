#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// OPTIMAL  (TC->O(1), SC->O(N))
class st{
    stack<int>st;
    long long mini = INT_MAX;


    void push(int val) {
        if(st.empty()){
            mini = val;
            st.push(val);
        }
        else{
            if(mini>val){
                st.push(2*val - mini);
                mini = val;
            }
            else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        long long n = st.top();
        if(n<mini){
            mini = (2*mini)-st.top();
        }
        st.pop();
    }
    
    int top() {
       long long n = st.top();
        if(n<mini){
            return mini;
        }
        return n;
    }
    
    int getMin() {
        return mini;
    }
};












// BRUTE/BETTER (TC->O(1), SC->O(2N)).... OPTIMIZE SC

class st{
    stack<pair<int,int>>st;

    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else
        st.push({val,min(val,st.top().second)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
         return st.top().second;
    }
};
int main(){

}