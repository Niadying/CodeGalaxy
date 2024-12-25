#include<iostream>
using namespace std; 

    int main(){
        int n; 
        cout<<"Enter the number : ";
        cin>>n;



        for (int i = 1; i<=n; i++){
            int z = i;

            for (int j= 1; j<=n-i; j++){

                cout<<" ";
            }
            for (int k = 1; k<=i; k++)
        {

            cout<<k; 
        }
    for (int m = 1; m<=i-1; m++){

        cout<<z-1;

        z--;
        
    }
      
        
// without space k solve kr skte hai......

  for (int l = 1; l<=n-i; l++)
        {
            cout<<" ";
        }
cout<<endl;

        }

    
    return 0;
}