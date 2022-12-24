#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;
		
	int current_digit = n % 10;
	int prev_digit = 0;
	
	n = n / 10;

	if (n > 0) {
		while (n > 0) {
			prev_digit = current_digit;
			current_digit = n % 10;
			//n = n / 10;
			int difference = current_digit - prev_digit;

			if ((difference > 1) || (difference < -1)) {
				cout << "The number is not jumbled." << endl;
				break;
			} else {
				// check if we are at the last digit
				if (n / 10 <= 0) {
					// the difference so far has been <= 1. Therefore, it is a jumbled number
					cout << "The number is jumbled." << endl;
					break;
				}
			}

			n = n / 10;	
		}	
	} else {
		cout << "Enter a number with more digits." << endl;
	}


}
