  #include<iostream>
  
using namespace std;

void print1(int n)
{
for (int i=0;i<n;i++)
{
    for(int j=1;j<=i;j++){
    cout<< i << " ";}
    cout << endl;
}
cout << endl;  
}
void print2(int n)
{
for (int i=0;i<n;i++)
{
    for(int j=1;j<=i;j++){
    cout<< i << " ";}
    cout << endl;
}
}


int main()      
{
int n;
cin>> n;
print2(n);
} 