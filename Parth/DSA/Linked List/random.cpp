#include<iostream>
using namespace std;

int main() {
	
	    int n ;
	    cin >>n;
	    char string[n+1] ;
	    cin>> string;
	
	return -1;

}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t ;
// 	cin >>t;
// 	for(int i = 0;i<t; i++){
// 	    int n;
// 	    cin>>n;
	    
// 	    vector<int> arr;
// 	    for (int i =0;i<n; i++){
// 	        int num ;
// 	        cin>>num;
// 	        arr.push_back(num);
// 	    }
// 	    vector<int > result;
	    
// 	    for (int i=0;i<arr.size();i++){
// 	        bool fnd = false;
// 	        for(int j=i+1;j<arr.size();j++){
// 	            if (arr[i]== arr[j]){
// 	                arr.erase(arr.begin() + j);
// 	                arr.erase(arr.begin() + i);
// 	                result.push_back(0);
// 	                i--;
// 	                fnd = true;
// 	                break;
// 	            }
// 	        }
// 	        if (fnd) continue;
// 	        result.push_back(arr[i]);
// 	    }
// 	    cout<<result.size()<<endl;
	    
// 	}
// 	return 0;

// }
