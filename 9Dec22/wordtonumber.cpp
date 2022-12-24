#include <iostream>
using namespace std;

int main() {
	int n, original, rn;
	cout << "Enter number: ";
	cin >> n;
	cout << endl;

	// reverse the number
	rn = 0;

	original = n;

	while (n > 0) {
		int digit = n % 10;
		rn = (10 * rn) + digit;
		n = n / 10;
	}

	// cout << "The reversed number is: " << rn << endl;
	
	while (rn > 0) {
		int dig = rn % 10;	
	
		switch (dig) {
			case 1: cout << "ONE ";break;
			case 2: cout << "TWO ";break;
			case 3: cout << "THREE ";break;
			case 4: cout << "FOUR ";break;
			case 5: cout << "FIVE ";break;
			case 6: cout << "SIX ";break;
			case 7: cout << "SEVEN ";break;
			case 8: cout << "EIGHT ";break;
			case 9: cout << "NINE ";break;
			case 0: cout << "ZERO ";break;
		}

		rn = rn / 10;
	}

	while (original % 10 == 0) {
		cout << "ZERO ";
		original /= 10;
	}

	cout << endl;


}	

