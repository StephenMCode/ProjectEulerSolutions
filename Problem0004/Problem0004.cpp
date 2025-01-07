#include <iostream>
#include <string>

bool IsPalindrome(int number) {
	std::string str = std::to_string(number);
	size_t len = str.size();

	for (size_t i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			return false;
		}
	}

	return true;
}

// Finds the largest palindrome made from the product of two 3-digit numbers
int LargestPalindromeProduct() {
	int largest_palindrome = 0;

	for (int i = 999; i >= 100; --i) {
		for (int j = i; j >= 100; --j) { // Avoid duplicate calculations
			int product = i * j;
			if (product <= largest_palindrome) {
				break; // If product is smaller, the largest palindrome has been found
			}
			if (IsPalindrome(product)) {
				largest_palindrome = product;
			}
		}
	}

	return largest_palindrome;
}

int main()
{
	int result = LargestPalindromeProduct();

	std::cout << "The largest palindrome made from the product of two 3-digit numbers is: "
			  << result << "\n";

	return 0;
}