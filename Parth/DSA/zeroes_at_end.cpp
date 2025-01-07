#include<iostream>
#include<vector>

using namespace std;

//BRUTE

// vector<int> moveZeroes(int n,vector<int>a ){

//     vector<int> temp;
//     for (int i=0;i<n;i++){
//         if (a[i]!=0){
//             temp.push_back(a[i]);

//         }
//     }

//     int nz=temp.size();
//     for (int i=0;i<nz;i++){
//         a[i]=temp[i];
//     }

//     for(int i=nz;i<n;i++){
//         a[i]=0;
//     }

//     return a;

// }

//OPTIMAL!!!!

vector<int> moveZeroes(int n,vector<int>a ){
        int j=-1;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                j=i;
                break;
            }
        }

        if (j==-1) return a;

        for (int i = j+1;i<n;i++){
            if(a[i]!=0){
                swap(a[i],a[j]);
                j++;
            }
        } 
        return a;
    }


int main(){
     
    vector<int> a;
    a.push_back(1);
    a.push_back(0);
    a.push_back(2);
    a.push_back(3);
    a.push_back(2);
    a.push_back(0);
    a.push_back(0);
    a.push_back(5);
    a.push_back(1);
    int n = a.size();

    vector<int> result = moveZeroes(n, a);

    // Print the result
    for (int i : result) {
        cout << i << " ";
    }
    return 0;

    }


    