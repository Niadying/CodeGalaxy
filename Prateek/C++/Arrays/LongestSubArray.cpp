// LONGEST SUB-ARRAY


// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int>& a, long long k) {
//     int n = a.size(); // size of the array.

//     map<long long, int> preSumMap;
//     long long sum = 0;
//     int maxLen = 0;
//     for (int i = 0; i < n; i++) {
//         //calculate the prefix sum till index i:
//         sum += a[i];

//         // if the sum = k, update the maxLen:
//         if (sum == k) {
//             maxLen = max(maxLen, i + 1);
//         }

//         // calculate the sum of remaining part i.e. x-k:
//         long long rem = sum - k;

//         //Calculate the length and update maxLen:
//         if (preSumMap.find(rem) != preSumMap.end()) {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }

//         //Finally, update the map checking the conditions:
//         if (preSumMap.find(sum) == preSumMap.end()) {
//             preSumMap[sum] = i;
//         }
//     }

//     return maxLen;
// }

// int main()
// {
//     vector<int> a = {2, 3, 5, 1, 9};
//     long long k = 10;
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }


// SORT 0,1,2  ----> BY DUTCH NATIONAL FALG ALGO 




// #include <bits/stdc++.h>
// using namespace std;

// void sortArray(vector<int>& arr, int n) {

//     int low = 0, mid = 0, high = n - 1; // 3 pointers

//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main()
// {
//     int n = 6;
//     vector<int> arr = {0, 2, 1, 2, 0, 1};
//     sortArray(arr, n);
//     cout << "After sorting:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// HIGHEST SUB ARRAY SUM & THE ARRAY WHICH GIVES THE ANS  ----> KANDANE'S ALGO



#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;
    int start=0, ansSt = -1, ansEn = -1;
    for (int i = 0; i < n; i++) {
        
        if(sum==0) int start = i;
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            ansSt = start;
            ansEn = i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }
    cout<<"[ ";
    for(int i = ansSt; i<ansEn; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

