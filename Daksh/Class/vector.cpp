#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(4, 12);

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    cout << "\n";

    v.erase(v.begin() + 2, v.begin() + 4);

    for(auto it : v){
        cout << it << " ";
    }
}