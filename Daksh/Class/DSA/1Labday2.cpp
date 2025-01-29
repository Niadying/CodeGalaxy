#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int arr[n];
    int half = n / 2;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Median: " << arr[half];

    return 0;

}