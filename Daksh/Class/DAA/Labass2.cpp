//! Sattu bhai code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool ans = false;
    int arr[10] = {11, 2, 32, 4, 5, 3, 2, 1, 42, 88};
    int n = sizeof(arr) / sizeof(arr[0]);

    /////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ans = true;
                break;
            }
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            ans = true;
            break;
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    vector<int> hm(n, 0);
    for (int i = 0; i < n; i++)
    {
        hm[i]++;
        if (hm[i] > 1)
        {
            ans = true;
            break;
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////

    if (ans == true)
    {
        cout << "Duplicate exists" << endl;
    }
    else
    {
        cout << "Duplicate does not exist" << endl;
    }
    return 0;
}
