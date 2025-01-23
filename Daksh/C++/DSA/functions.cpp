#include <iostream>
using namespace std;

void printName(string name);

int main(){

    string name;
    cin >> name;

    printName(name);

    return 0;

}

void printName(string name){

    cout << "Hello! " << name;
}