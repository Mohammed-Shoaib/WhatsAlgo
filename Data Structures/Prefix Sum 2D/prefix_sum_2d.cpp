/*
Data Structure: Prefix Sum 2D
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
Space Complexity: O(nm)

| Operations            | Time  | Space |
|-----------------------|-------|-------|
| PrefixSum2D(mat)      | O(nm) | O(1)  |
| rsq(lr, lc, hr, hc)   | O(1)  | O(1)  |
*/

#include <vector>

class PrefixSum2D {
private:
	std::vector<std::vector<int>> prefix;
public:
	PrefixSum2D(const std::vector<std::vector<int>>& mat) : prefix(mat) {
		// construct prefix sum
		for (int i = 0; i < mat.size(); i++)
			for (int j = 0; j < mat[i].size(); j++) {
				if (i > 0)
					prefix[i][j] += prefix[i - 1][j];
				if (j > 0)
					prefix[i][j] += prefix[i][j - 1];
				if (i > 0 && j > 0)
					prefix[i][j] -= prefix[i - 1][j - 1];
			}
	}

	int rsq(int r1, int c1, int r2, int c2) {
		// compute range sum for square with top left corner at (r1, c1) and bottom right corner at (r2, c2)
		int sum = prefix[r2][c2];
		if (r1 > 0)
			sum -= prefix[r1 - 1][c2];
		if (c1 > 0)
			sum -= prefix[r2][c1 - 1];
		if (r1 > 0 && c1 > 0)
			sum += prefix[r1 - 1][c1 - 1];
		return sum;
	}
};