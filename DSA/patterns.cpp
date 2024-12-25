#include <iostream>

using namespace std;

void print1(int n)
{
for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++){
    cout<< " *";}
    cout << endl;
}
cout << endl;  
}





int main()
{
int n;
cin>> n;
print1(n);
 

}