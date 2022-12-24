#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "\nEnter the second number: ";
	cin >> n2;
	int i, gcd;
	for (i = 1; i <= n1 && i <= n2; i++) {
		if ((n2 % i == 0) && (n1 % i == 0)) {
			gcd = i;
		}
	}

	cout << "The greatest common divisor is: " << gcd << endl;

}
