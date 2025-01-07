#include <iostream>

// Calculates the sum of even Fibonacci numbers not exceeding a given limit
int SumOfEvenFibonacci(int limit) {
	int sum = 0;
	int a = 1;
	int b = 2;

	while (b <= limit) {
		if (b % 2 == 0) {
			sum += b;
		}
		int next = a + b;
		a = b;
		b = next;
	}

	return sum;
}

int main()
{
	constexpr int kLimit = 4'000'000; // Maximum value for this solution
	int result = SumOfEvenFibonacci(kLimit);

	std::cout << "The sum of the even-valued Fibonacci terms not exceeding "
			  << kLimit << " is: " << result << "\n";

	return 0;
}