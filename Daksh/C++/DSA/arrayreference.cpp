#include <iostream>
using namespace std;

void arrayprinter(int arr[], int n);

int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    arrayprinter(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;

}
void arrayprinter(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}