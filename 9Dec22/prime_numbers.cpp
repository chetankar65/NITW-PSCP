#include <iostream>
using namespace std;

int main() {
	int limit;
	cout << "Input the upper limit: ";
	cin >> limit;

	int i, j;
	for (i = 2; i <= limit; i++) {
		for (j = 1; j <= i/2; j++) {
			if (i % j == 0 && j != 1 && j != i) {
				cout << i << " ";
				break;
			}
		}
	}

	cout << endl;

}
