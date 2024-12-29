#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){

    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(65);
    v.push_back(89);
    v.push_back(100);
    v.push_back(1990);

    cout<<"Finding 65 -> "<<binary_search(v.begin(), v.end(), 65)<<endl;

    cout<<"Lower Bound -> "<<lower_bound(v.begin(),v.end(),65)-v.begin()<<endl;
    cout<<"Upper Bound -> "<<upper_bound(v.begin(),v.end(),65)-v.begin()<<endl;

    int a = 3, b = 389;
    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a -> "<<a<<endl;

    string str = "Hello";
    reverse (str.begin(),str.end());
    cout<<"String -> "<<str<<endl;

    rotate(v.begin(), v.begin()+2, v.end());
    cout<<"After rotation vector is -> ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After sorting vector is -> ";
    sort(v.begin(),v.end());    // THIS IS BASED ON INTRO SORTING i.e -> 3 TYPES OF SORTING 1. QUICKSORT 2. HEAP SORT 3. INSERTION SORT..
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

}