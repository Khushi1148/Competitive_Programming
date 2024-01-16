// Find out the count of all numbers divisible by first 'k' prime numbers and less than 'n'.

# include <bits/stdc++.h>
using namespace std;

int primes[3] = {2,3,5};


int getDivisiblesOfPrime(int n, int k){
	// Creating subsets of the prime array
	int result = 0;
	for (int num = 1; num < (1 << k); num++) {
		int lcm = 1, parity = 0; // parity means here, the no. of set bits
		for (int bit = 0; bit < k; bit++) {
			if ((num >> bit) & 1) {
				// we multiply the product of all elements of subarray
				lcm *= primes[bit];
				parity++;
			}
		}
		
		// to determine the no. of divisibles
		// Ex: n = 20, lcm = 10 => so, there will be 2 elements from 1 to 20 that are divisible by 10
		int divisible = n / lcm;

		

		// inclusion - exclusion principle
		if (parity % 2 == 0) {
			// even
			result -= divisible;
		}
		else {
			// odd
			result += divisible;
		}
	}
	return result;

}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, k;
	cin >> n >> k;
	cout << getDivisiblesOfPrime(n,k);
	return 0;
}