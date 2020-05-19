/*
Algorithm: Peak Finding 2D
Time Complexity: O(mlogn)
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <utility>
#include <iterator>
#include <algorithm>

using namespace std;

pair<int, int> find_peak_2d(int low, int high, vector<vector<int>> &a) {
    int mid, j, n, m;
    mid = (low + high) / 2;
    j = distance(a[mid].begin(), max_element(a[mid].begin(), a[mid].end()));
    n = a.size();
    m = a[mid].size();
    
    // base cases
    if (n == 1)
        return make_pair(n, j);
    else if ( (mid == 0 && a[mid][j] >= a[mid + 1][j]) ||
              (mid == n - 1 && a[mid][j] >= a[mid - 1][j]) )
        return make_pair(mid, j);
    
    if (a[mid][j] < a[mid - 1][j])
        return find_peak_2d(low, mid - 1, a);
    else if (a[mid][j] < a[mid + 1][j])
        return find_peak_2d(mid + 1, high, a);
    else
        return make_pair(mid, j);
}

int main() {
    int n, m;
    pair<int, int> index;
    cin >> n >> m;
    vector< vector<int> > a(n, vector<int> (m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    index = find_peak_2d(0, n - 1, a);
    cout << index.first << " " << index.second;
    return 0;
}