#include<bits/stdc++.h>
using namespace std;
void pattern(int a)
{
    for(int i=1;i<=(2*a-1);i++)
    {
        int star=i;
        if(i>a)
        star=2*a-i;
        for(int j=1;j<=star;j++)
        {
            cout <<"* ";
        }
        cout<<endl;
        

    }
}
int main()
{
    int n;
    cout<<"enter n";
    cin >>n;
    pattern(n);
}

    
