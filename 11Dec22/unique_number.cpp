#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int original = n;
	int current_digit, compare_digit;

	int rn = 0;

	int x = n;

	while (x > 0) {
		int digit = x % 10;
		rn = (10 * rn) + digit;
		x = x / 10;
	}


	while (n > 0) {
		int temp = n / 10;
		current_digit = n % 10;

		if (temp == 0) {
			cout << "Yes.";

			while (rn > 0)
			{
				int digit = rn % 10;
				if (rn / 10 == 0) {
					cout << digit;
				} else {
					cout << digit << ",";
				}

				rn = rn / 10;
			}

			while (original % 10 == 0) {
				cout << "," << 0;
				original /= 10;
			}
			
			cout << " are unique digits." << endl;
			break;
		}

		while (temp > 0) {
			compare_digit = temp % 10;
			if (compare_digit == current_digit) {
				break;
			}

			temp = temp / 10;
		}

		if (compare_digit == current_digit) {
			cout << "No.";

			while (rn > 0)
			{
				int digit = rn % 10;
				if (rn / 10 == 0) {
					cout << digit;
				} else {
					cout << digit << ",";
				}

				rn = rn / 10;
			}

			while (original % 10 == 0) {
				cout << "," << 0;
				original /= 10;
			}

			cout << " are not unique digits." << endl;
			break;
		}

		n = n / 10;
	}

}
