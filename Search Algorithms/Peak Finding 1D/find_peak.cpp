/*
Algorithm: Peak Finding 1D
Time Complexity: O(logn)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>

using namespace std;

int find_peak(int low, int high, vector<int> &a) {
    int n = a.size();
    int mid = (low + high) / 2;

    // Base Cases
    if (n == 1)
        return 0;
    else if ( (mid == 0 && a[mid] >= a[mid + 1]) || 
              (mid == n - 1 &&  a[mid] >= a[mid - 1]) )
        return mid;
    
    if (a[mid] < a[mid - 1])
        return find_peak(low, mid - 1, a);
    else if (a[mid] < a[mid + 1])
        return find_peak(mid + 1, high, a);
    else
        return mid;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << find_peak(0, n - 1, a);
    return 0;
}