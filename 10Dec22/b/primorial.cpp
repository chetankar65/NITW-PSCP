#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "Enter a prime number: ";
	cin >> n;
	cout << endl;
	
	int i, j;
	int product = 1;
	for (i = 1; i <= n; i++) {
		// check if i is a prime number
		for (j = 1; j <= i; j++) {
			if (i % j == 0 && j != 1 || j != i/2) {
				break;
			}
		}

		if (j == i/2 + 1)
			product *= i;
		
		if ((product + 1) == n || (product - 1) == n) {
			cout << n << " is a Primorial number." << endl;
			break;
		}

		if (i == n/2) {
			cout << n << " is not a Primorial number." << endl;
			break;
		}
		
	}

}
