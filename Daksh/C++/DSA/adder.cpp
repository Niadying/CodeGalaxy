#include <iostream>
using namespace std;

string namemixup(string &name);

int main(){

    string name;
    cin >> name;

    cout << name << "\n";
    namemixup(name);

    cout << name << "\n";

    return 0;

}

string namemixup(string &name){

    name[0] = 'R';
    cout << name << endl;

}