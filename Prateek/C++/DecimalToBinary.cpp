#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of N \n";
    cin >> n;
    int ans = 0;
    int i=0, m=1;
    while(n!=0){
        int bit = n%2;
        ans = (bit * m ) + ans;
        i++;
        n = n/2;
        m = m * 10;
    }
    cout << ans << endl;

}
            
    