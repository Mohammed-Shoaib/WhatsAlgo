/*
Algorithm: Counting Sort
Time Complexity: O(n + k)
Space Complexity: O(k)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void counting_sort(vector<int> &a) {
    int min, max;
    min = *min_element(a.begin(), a.end());
    max = *max_element(a.begin(), a.end());
    vector<int> count(max - min + 1);

    for (int i = 0; i < a.size(); i++)
        count[a[i] - min]++;
    
    for (int i = 0, j = 0; i < count.size(); i++)
        while (count[i] != 0) {
            a[j] = i + min;
            count[i]--;
            j++;
        }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    counting_sort(a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}