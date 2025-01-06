#include <iostream>

// Calculates the sum of all multiples of 3 or 5 below a given limit
int SumOfMultiples(int limit) {
	int sum = 0;

	for (int i = 0; i < limit; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	return sum;
}

int main()
{
	constexpr int kLimit = 1000; // Limit below which we find the sum
	int result = SumOfMultiples(kLimit);

	std::cout << "The sum of all multiples of 3 or 5 below " << kLimit
			  << " is: " << result << "\n";

	return 0;
}