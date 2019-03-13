/*
Algorithm: Merge Sort
Time Complexity: O(nlogn)
Space Complexity: O(n)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>

using namespace std;

void merge(int left, int mid, int right, vector<int> &a) {
    int i, j, k;
    vector<int> temp(right - left + 1);
    
    i = left;
    j = mid + 1;
    k = 0;
    
    while (i <= mid && j <= right) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            i++;
        } else {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = left; i <= right; i++)
        a[i] = temp[i - left];
}

void merge_sort(int left, int right, vector<int> &a) {
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    merge_sort(left, mid, a);
    merge_sort(mid + 1, right, a);
    merge(left, mid, right, a);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    merge_sort(0, n - 1, a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}