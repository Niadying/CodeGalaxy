#include<iostream>
using namespace std;

//print the subsequences whose sum is k

// bool print(int ind,vector<int> &ds,int s,int sum, int arr[],int n){
   
//     if(ind==n){
//         if (s==sum){
//         for(auto it: ds){
//             cout<<it<<" ";
//         }  
//         cout<<endl;
//         return true;

//     }
//         else return false ;
//     }
    
//     ds.push_back(arr[ind]);
//     s +=arr[ind];

//     if (print(ind+1,ds,s,sum,arr,n)==true){
//         return true;
//     }

//     s -= arr[ind];
//     ds.pop_back();

//      if (print(ind+1,ds,s,sum,arr,n)==true) return true; 

//      return false;
//     }


// int main(){
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int> ds; 
//     print(0,ds,0,sum,arr,n);
// }


//count the subsequencees with sum k



int print(int ind,vector<int> &ds,int s,int sum, int arr[],int n){
   
    if(ind==n){
        if (s==sum){
        for(auto it: ds){
            cout<<it<<" ";
        }  
        cout<<endl;
        return 1;

    }
        else return 0 ;
    }
    
    ds.push_back(arr[ind]);
    s +=arr[ind];

    int l=print(ind+1,ds,s,sum,arr,n);


    s -= arr[ind];
    ds.pop_back();

     int r= print(ind+1,ds,s,sum,arr,n);

     return l+r;
    
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds; 
    cout<<print(0,ds,0,sum,arr,n);
}