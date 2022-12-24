#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;
	
	int i, k;
	
	if (n / 10 > 0) {
		for (i = 10; i <= n; i++) {
			// check sum of number + sum of reversed number
			int rn = 0;
			k = i;
			while (k > 0) {
				int digit = k % 10;
				rn = (10 * rn) + digit;
				k = k / 10;
			}

			if ((i + rn) == n) {
				cout << "It is a magic number." << endl;
				break;
			}

			if (i == n) {
				cout << "It is not a magic number." << endl;
				break;
			}
		}
	} else {
		cout << "Enter more digits." << endl;
	}

}
