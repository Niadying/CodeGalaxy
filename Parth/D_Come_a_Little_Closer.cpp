// #include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
long long find_min(long long arr[], int n) {
    int minElement = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

long long find_max(long long  arr[], int n) 
{
    int maxElement = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      long long  x[n];
      long long  y[n];
      for(int i=0;i<n;i++)
      {
        cin>>x[i]>>y[i];
      }
      if(n==1)
      cout<<1<<endl;
      else
      {
      long long pmin[n];
      long long x1,y1;
    
      for(int i=0;i<n;i++)
      {
        x1=x[i];
        y1=y[i];
        
        x[i]=0;
        y[i]=0;
        long long  a=find_max(x,n);
        long long  b=find_max(y,n);
        x[i]=INT_MAX;
        y[i]=INT_MAX;
        long long a1=find_min(x,n);
        long long b1=find_min(y,n);
        
        pmin[i]=(a-a1+1)*(b-b1+1);
        x[i]=x1;
        y[i]=y1;
      }
      cout<<find_min(pmin,n)<<endl;
      
      }
    }
    return 0;
}