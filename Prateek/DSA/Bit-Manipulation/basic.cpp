#include<bits/stdc++.h>
using namespace std;

// SWAP TWO NUMBERS
void swapNumbers(int &a,int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

// CHECK ith BIT IS SET OR NOT
bool checkIth(int num, int i){
    
    // USING LEFT SHIFT
    int x = 1<<i;
    return x&num;

    // USING RIGHT SHIFT
    num = num>>i;
    return num&1;

}

int setIth(int n, int i){
    int x = 1<<i;
    return n|x;
}

int clearIth(int n,int i){
    // USING NOT AND AND
    int y = ~(1<<i);
    return n&y;

    // USING XOR AND AND
    int x = 1<<i;
    if(x&n) return x^n;
    else return n;
}

int toggleIth(int n, int i){
    int x = 1<<i;
    return x^n;
}

int removeLastSetbit(int n){
    return n&(n-1);
}

bool powerOfTwo(int n){
    if(n<=0) return false;
    else return n&(n-1)?false:true;
}

int numberOfSetbits(int n){
    // OTHER
    int cnt = 0;
    int y = n;
    while(n){
        cnt++;
        n&=n-1;
    }
    return cnt;
    return __builtin_popcount(y);  // function to cnt no of set bit 
}

int main(){
    int a = 5, b = 4;
    swapNumbers(a,b);
    // cout<<a<<" "<<b<<endl;
    // cout<<checkIth(13,2)<<endl;
    // cout<<setIth(9,2)<<endl;
    // cout<<clearIth(13,2)<<endl;
    // cout<<toggleIth(13,3)<<endl;
    // cout<<removeLastSetbit(16)<<endl;
    // cout<<"Is power of 2 : "<<powerOfTwo(16)<<endl;
    // cout<<numberOfSetbits(5)<<endl;

    // cout<<((1<<2)&70);
    int n = 4;
    int cnt = 0;
    while(n) cnt+= __builtin_popcount(n--);
    cout<<cnt<<endl;
}