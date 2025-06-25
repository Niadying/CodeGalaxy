#include<iostream>
using namespace std; 

    int main(){
        
        int n;
        cout<<"Enter the number : ";
        cin>>n;

        // for (int i = 1; i<=n; i++ ){
            
            
        //      for (int j = 1; j<=i-1; j++){

        //         cout<<" ";
        //     }

        //     for (int k = 1; k<=n-i+1; k++){

        //         cout<<i;
        //     }
           
        //     cout<<endl;
        // }

    // for (int i = 1; i<=n; i++){

    //     for (int k =1; k <=i-1; k++){

    //         cout<<" "; 
        
    //     }

    //     for (int j = i; j<=n; j++){

    //         cout<<j; 
    //     }
    // cout<<endl;

    // }
int count = 1;
     for (int i = 1; i<=n; i++){

        for (int j = 1; j<=n-i; j++){

            cout<<" ";
        }
    for (int k = 1; k<=i; k++){

        cout<<count; 
        count ++; 


    }
    cout<<endl;
           

    }


    return 0;
}