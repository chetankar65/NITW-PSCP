#include <iostream>
using namespace std;

int main() {
	int i, j, n, num;
	cout << "Enter rows: ";
	cin >> num;
	cout << endl;
	n = 1;

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			cout << n << " ";
			n++;
		}

		cout << endl;
	
	}

	return 0;
}
