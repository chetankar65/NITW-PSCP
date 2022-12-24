#include <iostream>
using namespace std;

int main() {
	int i, j, k;
	int n;
	cout << "Enter a number (b/w 3 and 1000): ";
	cin >> n;
	cout << endl;

	if (n >= 3 && n <= 100) {
		int total = (n + 1) + ((2*n) + 1) + (n + 1);
		int m = n + 1;
		for (i = 1; i <= n + 1; i++) {
			for (int x = 1; x <= total; x++) {
				if (i == 1) {
					if (x <= n + 1 || x >= total - n) {
						cout << ".";
					} else {
						cout << "_";
					}
				} else {
					if (x <= m || x >= total - m + 1) {
						cout << ".";
					} else if (x == m + 1 || x == m + 2) {
						cout << "/";
					} else if (x == total - m - 1 || x == total - m) {
						cout << "\\";		
					} else {
						cout << "_";
					}
				}

			}

			m--;

			cout << endl;
		}

		for (j = 1; j <= total; j++) {
			int half = total / 2; 
			if (j <= 2)
				cout << "/";
			else if (j >= total - 1)
				cout << "\\";
			else {
				if (j == half - 1) 
					cout << "N";
				else if (j == half + 1)
					cout << "T";
				else if (j == half + 2)
					cout << "W";
				else if (j == half + 3)
					cout << "!";
				else if (j == half)
					cout << "I";
				else
					cout << "_";
			}
		}

		cout << endl;

		int dot = 0;
		for (k = 1; k <= n; k++) {
			for (int x = 1; x <= total; x++) {
				if (x <= dot || x >= total - dot + 1) {
					cout << ".";
				} else if (x <= dot + 2 && x > dot) {
					cout << "\\";
				} else if (x >= total - dot - 1 && x < total - dot + 1) {
					cout << "/";
				} else {
					cout << "_";
				}
			}

			dot++;
			cout << endl;
		}
	} else {
		cout << "Enter a number b/w 3 and 1000." << endl;
	}
}
