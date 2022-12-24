#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a prime number: ";
	cin >> n;

	cout << endl;
	
	int i, k;

	int rn = 0;

	while (n > 0) {
		int digit = n % 10;
		rn = (rn * 10) + digit;
		n = n / 10;
	}

	for (i = 2; i <= rn/2; i++) {
		if (rn % i == 0) {
			cout << "It is not an Emirp number." << endl;
			break;
		}
	}

	if (i == rn/2 + 1)
		cout << "It is an emirp number." << endl;


		

}
