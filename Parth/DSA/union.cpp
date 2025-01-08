//BRUTE!!

#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector <int> sortedArray (vector <int> a, vector <int> b){
    int n1=a.size();
    int n2=b.size();
    set<int> s;
    for(int i =0;i<n1;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(b[i]);
    }
    vector<int> temp ;
    for(auto it: s){
        temp.push_back(it);
    }
    return temp;
}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(0);
    a.push_back(5);
    a.push_back(6);
    int n1 = a.size();

    vector<int> b;
    a.push_back(1);
    a.push_back(0);
    a.push_back(2);
    a.push_back(3);
    a.push_back(7);
    a.push_back(0);
    a.push_back(5);
    a.push_back(5);
    a.push_back(8);
    int n2 = a.size();

    vector<int> result = sortedArray(a, b);

    // Print the result
    for (int i : result) {
        cout << i << " ";
    }
    return 0;



}