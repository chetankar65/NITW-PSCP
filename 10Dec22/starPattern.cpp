#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter maximum number of stars: ";
	cin >> n;
	cout << endl;

	// number of spaces
	
	int i, j, k;
	
	// i --> number of rows
	// j --> number of spaces
	// k --> 
	for (i = 1; i <= n; i++) {
		// take care of spaces
		for (j = n - i; j >= 1; j--) {
			cout << " ";
		}

		for (k = 1; k <= n; k++) {			
			if (i == 1 || i == n) {
				cout << "*";
			} else {
				if (k == 1 || k == n) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
		}

		cout << endl;
	}

}
