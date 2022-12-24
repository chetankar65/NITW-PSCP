#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;

	int original = n;
	int sum = 0;
	while (n > 0) {
		int digit = n % 10;
		sum += digit * digit;
		n = n / 10;
	}

	n = sum;

	sum = 0;

	while (n > 0) {
		int digit = n % 10;
		sum += digit * digit;
		n = n / 10;
	}

	if (sum == 1) 
		cout << original << " is a happy number." << endl;
	else
		cout << original << " is an unhappy number." << endl;

}
