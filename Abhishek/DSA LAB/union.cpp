#include <bit/stdc++.h>
using namespace std;

void Union(vector<int>& a, vector<int>& b) {
    unordered_set<int> unionSet;
    for (int num : a)
        unionSet.insert(num);
    for (int num : b)
        unionSet.insert(num);
    for (auto it : unionSet)
        cout << it << " ";
    cout << endl;
}

void Intersection(vector<int>& a, vector<int>& b) {
    unordered_set<int> setA(a.begin(), a.end());
    unordered_set<int> intersectionSet;
    for (int num : b) {
        if (setA.find(num) != setA.end())
            intersectionSet.insert(num);
    }
    for (auto it : intersectionSet)
        cout << it << " ";
    cout << endl;
}

int main() {
    vector<int> a = {3, 1, 4, 2, 5};
    vector<int> b = {8, 7, 5, 6, 4};
    Union(a, b);
    Intersection(a, b);
    return 0;
}
