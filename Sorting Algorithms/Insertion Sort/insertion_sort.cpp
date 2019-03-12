/*
Algorithm: Insertion Sort
Time Complexity: O(n^2)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertion_sort(vector<int> &a) {
    int key, n = a.size();
    for (int j, i = 1; i < n; i++) {
        key = a[i];
        for (j = i - 1; j >= 0 && key < a[j]; j--)
            a[j + 1] = a[j];
        a[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    insertion_sort(a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}