#include<iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;

    int arr[n];
     cout<<" enter"<<n<< "elements: "<<endl;
     for (int i ;i<n;i++)
     {cin >> arr[i];
     }

     //precomputation

     int hash[13]={0};

     for(int i=0;i<n;i++)
     {
        hash[arr[i]] +=1;

     }

     cout << hash[1]<<endl;



}