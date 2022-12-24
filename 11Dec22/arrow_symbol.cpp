#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter size of the arrow (odd num b/w 3 and 79): ";
	cin >> n;
	cout << endl;

	if (n >= 3 && n <= 79) {
		int i, j, k;
		for (i = 1; i <= n - 1; i++) {
			int total = n + n/2 + n/2;
			for (int x = 1; x <= total; x++) {
				if (i == 1) {
					if (x <= n/2 || x >= total - n/2 + 1) {
						cout << ".";
					} else {
						cout << "#";
					}
				} else {
					if (x == n/2 + 1 || x == total - n/2) {
						cout << "#";
					} else {
						cout << ".";
					}
				}
			}

			cout << endl;
		}
		
		int total = n + n/2 + n/2;
		for (j = 1; j <= total; j++) {
			if (j <= n/2 + 1 || j >= total - n/2) {
				cout << "#";
			} else {
				cout << ".";
			}
		}

		cout << endl;
		
		int m = 2;
		for (k = 1; k <= n - 1; k++) {
			for (int x = 1; x <= total; x++) {
				if (x == m || x == total - m + 1) {
					cout << "#";
				} else {
					cout << ".";
				}
			}

			m++;

			cout << endl;
		}

		cout << endl;
	} else {
		cout << "Enter a number b/w 3 and 79." << endl;
	}
}
