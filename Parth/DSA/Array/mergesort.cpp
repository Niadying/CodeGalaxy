#include<iostream>
#include<vector>
using namespace std;

void merge(vector <int> &arr ,int low,int mid,int high)
{
    vector <int> temp;
    int left = low;
    int right =mid+1;
    while (left<=mid && right <=high){
        if (arr[left]<=arr[right]){
            temp.push_back (arr[left]);
            left++;
        }
        else {
            temp.push_back (arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back (arr[left]);
            left++;
    }
    while (right<=high){
        temp.push_back (arr[right]);
            right++;
    }
    for( int i =low ;i<=high ;i++){
        arr[i] = temp[i-low];
    }


       
}

void ms (vector<int> & arr,int low, int high){
    if (low == high) return;
    int mid= (low+high)/2;
    ms( arr,low,mid);
    ms( arr,mid+1,high );
    merge(arr,low,mid,high);

}

void mergesort(vector<int> & arr,int n)
{
    ms(arr,0,n-1);
}



int main() {
    // Declare a vector and initialize it manually
    vector<int> arr;
    arr.push_back(38);
    arr.push_back(27);
    arr.push_back(43);
    arr.push_back(3);
    arr.push_back(9);
    arr.push_back(82);
    arr.push_back(10);

    // Print the original array
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Call the mergesort function
    mergesort(arr, arr.size());

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
      
