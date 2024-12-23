#include <bits/stdc++.h>
using namespace std;
int f(int i,int pro)
{
    if(i==1)
    {
        cout<<pro;
        return 0;
    }
    f(i-1,pro*i);
}
int main()
{int n;
cin>>n;
f(n,1);

}