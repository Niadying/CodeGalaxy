#include <iostream>
using namespace std;

int count_digit(int a){
    
    int count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    return count;
}
int main(){
    count_digit(234);
}