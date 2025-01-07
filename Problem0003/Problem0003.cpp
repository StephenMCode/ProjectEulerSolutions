#include <iostream>

// Function to find the largest prime factor of a given number
long long LargestPrimeFactor(long long n) {
	long long largest_factor = 0;

	// Remove all factors of 2
	while (n % 2 == 0) {
		largest_factor = 2;
		n /= 2;
	}

	// Check for odd factors
	for (long long i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			largest_factor = i;
			n /= i;
		}
	}

	// If n is a prime number greater than 2, it's the largest factor
	if (n > 2) {
		largest_factor = n;
	}

	return largest_factor;
}

int main()
{
	constexpr long long kNumber = 600'851'475'143;
	long long result = LargestPrimeFactor(kNumber);

	std::cout << "The largest prime factor of " << kNumber
			  << " is: " << result << "\n";

	return 0;
}