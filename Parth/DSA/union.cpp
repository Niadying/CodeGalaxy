//BRUTE!!

#include<iostream>
#include<vector>
using namespace std;

// vector <int> sortedArray (vector <int> a, vector <int> b){
//     int n1=a.size();
//     int n2=b.size();
//     set<int> s;
//     for(int i =0;i<n1;i++){
//         s.insert(a[i]);
//     }
//     for(int i=0;i<n2;i++){
//         s.insert(b[i]);
//     }
//     vector<int> temp ;
//     for(auto it: s){
//         temp.push_back(it);
//     }
//     return temp;
// }
 
vector <int> ArrayIntersection (vector <int> a, vector <int> b,int n,int m){
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if (a[i]<b[j]){
            i++;
        }
        else if (b[j]<a[i]){
            j++;
        }
        else { 
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;

}


int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(5);
    a.push_back(6);
    int n1 = a.size();
 
    vector<int> b;
    b.push_back(2);
    b.push_back(3);
    b.push_back(3);
    b.push_back(5);
    b.push_back(6);
    b.push_back(7);
    b.push_back(5);
    b.push_back(7);
    b.push_back(8);
    int n2 = b.size();

    vector<int> result = ArrayIntersection(a,b,n1,n2);

    // Print the result
    for (int i : result) {
        cout << i << " ";
    }
    return 0;

//tc O(n1+n2)
//SC O(1)

}

