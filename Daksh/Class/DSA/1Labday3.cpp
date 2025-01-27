#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int arr[n];
    int Lar = 0;
    int SecLar = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Lar = arr[0];
    SecLar = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > Lar){
            SecLar = Lar;
            Lar = arr[i];
        }
    }

    cout << "Largest: " << Lar << endl;
    cout << "Second Largest: " << SecLar << endl;

    return 0;

}