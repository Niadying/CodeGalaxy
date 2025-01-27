#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int arr[n];
    int MAX = 0;
    int MIN = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    MAX = arr[0];
    MIN = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > MAX){
            MAX = arr[i];
        }
        if(arr[i] < MIN){
            MIN = arr[i];
        }
    }

    cout << "Max: " << MAX;
    cout << "Min: " << MIN;

    return 0;

}