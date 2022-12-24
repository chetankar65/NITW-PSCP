#include <iostream>
using namespace std;

int main() {
	int n, original;
	cout << "Enter a number: ";
	cin >> n;

	cout << endl;

	original = n;
	int sum = 0, digit;

	while (n > 0) {
		digit = n % 10;
		sum += digit * digit * digit;
		n = n / 10;
	}

	if (original == sum) { 
		cout << "It is an armstrong number." << endl;
	} else {
		cout << "It is not an armstrong number." << endl;
	}

}
