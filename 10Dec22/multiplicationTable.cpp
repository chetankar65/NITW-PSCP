#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number (n): ";
	cin >> n;
	cout << endl;

	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= n; j++) {
			cout << j << "X" << i << "=" << j * i << " ";	
		}

		cout << endl;
	}

}
