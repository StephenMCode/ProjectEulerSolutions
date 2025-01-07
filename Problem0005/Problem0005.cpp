#include <iostream>
#include <numeric>

int CalculateLCM(int a, int b) {
	return (a / std::gcd(a, b)) * b;
}

// Finds the smallest number evenly divisible by all numbers from 1 to max_divisor
int SmallestMultiple(int max_divisor) {
	int lcm = 1;

	for (int i = 2; i <= max_divisor; i++) {
		lcm = CalculateLCM(lcm, i);
	}

	return lcm;
}

int main()
{
	constexpr int kMaxDivisor = 20;
	int result = SmallestMultiple(kMaxDivisor);

	std::cout << "The smallest number evenly divisible by all numbers from 1 to "
			  << kMaxDivisor << " is: " << result << "\n";

	return 0;
}