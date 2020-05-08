/*
Algorithm: Primality Test
Time Complexity: O(sqrt(n))
Space Complexity: O(1)
Author: Mohammed Shoaib, github.com/Mohammed-Shoaib
*/

bool is_prime(int n) {
	// base cases
	if (n <= 1)
		return false;
	else if (n == 2 || n == 3)
		return true;
	else if (n % 2 == 0 || n % 3 == 0)
		return false;
	
	// primes are of the form 6k - 1 or 6k + 1
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	
	return true;
}