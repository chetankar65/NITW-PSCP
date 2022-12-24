#include <iostream>
using namespace std;

int main() {
	int n, rn;
	cout << "Enter a number: ";
	cin >> n;
	rn = 0;
	
	int original = n;
	int digit;
	cout << endl;

	while (n > 0) {
		digit = n % 10;
		rn = digit + (10 * rn);
		n = n / 10;
	}

	cout << "The reversed number is: " << rn << endl;

	if (original == rn)
		cout << "The given number is a palindrome." << endl;
	else
		cout << "The given number is not a palindrome." << endl;



}
