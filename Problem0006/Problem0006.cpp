#include <iostream>

// Calculates the sum of the squares of the first n natural numbers
int SumOfSquares(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	return sum;
}

// Calculates the square of the sum of the first n natural numbers
int SquareOfSum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum * sum;
}

int main()
{
	constexpr int kLimit = 100; // First kLimit natural numbers
	int sum_of_squares = SumOfSquares(kLimit);
	int square_of_sum = SquareOfSum(kLimit);

	int difference = square_of_sum - sum_of_squares;

	std::cout << "The difference between the square of the sum and the sum of "
			  << "the squares of the first " << kLimit
			  << " natural numbers is: " << difference << "\n";

	return 0;
}