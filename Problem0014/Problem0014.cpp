#include <iostream>
#include <unordered_map>

// Function to compute the Collatz sequence length for a given number
long long CollatzSequenceLength(long long n, std::unordered_map<long long, long long>& memo) {
	if (n == 1) return 1;

	if (memo.count(n)) return memo[n];

	if (n % 2 == 0) {
		memo[n] = 1 + CollatzSequenceLength(n / 2, memo);
	}
	else {
		memo[n] = 1 + CollatzSequenceLength(3 * n + 1, memo);
	}

	return memo[n];
}

int main() {
	constexpr int kLimit = 1'000'000; // Compute for numbers under this limit
	long long max_chain_length = 0; // Counter for the length of the longest chain
	long long starting_number = 0; // Counter for the starting number with the longest chain

	std::unordered_map<long long, long long> memo;

	for (long long i = 1; i < kLimit; i++) {
		long long current_chain_length = CollatzSequenceLength(i, memo);
		if (current_chain_length > max_chain_length) {
			max_chain_length = current_chain_length;
			starting_number = i;
		}
	}

	std::cout << "Starting number under " << kLimit
		<< " with the longest chain: " << starting_number << "\n";
	std::cout << "Length of chain: " << max_chain_length << "\n";

	return 0;
}