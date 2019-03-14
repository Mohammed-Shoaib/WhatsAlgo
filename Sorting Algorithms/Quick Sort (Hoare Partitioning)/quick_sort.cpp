/*
Algorithm: Quick Sort (Hoare partitioning)
Time Complexity: O(n^2)
Space Complexity: O(logn)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(int low, int high, vector<int> &a) {
    int i, j, pivot;
    pivot = a[(low + high) / 2];
    i = low - 1;
    j = high + 1;
    while(true) {
        do
            i++;
        while (a[i] < pivot);
        do
            j--;
        while (a[j] > pivot);
        if (i >= j)
            return j;
        else
            swap(a[i], a[j]);
    }
}

void quick_sort(int low, int high, vector<int> &a) {
    if (low >= high)
        return;
    int p = partition(low, high, a);
    quick_sort(low, p, a);
    quick_sort(p + 1, high, a);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quick_sort(0, n - 1, a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}