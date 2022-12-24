#include <iostream>
using namespace std;

int main() {
	int i, j, k, n;
	cout << "Enter the number of rows: ";
	cin >> n;
	cout << endl;
	k = 1;
	int even_row;
	for (i = 1; i <= n; i++) {
		// in even rows, we need to decrement.
		if (i % 2 == 0) {
			even_row = k + i - 1 ;
			k = even_row;
		}

		for (j = 1; j <= i; j++) {
			if (i % 2 == 0) {
				cout << even_row << " ";
				even_row--;
			} else {
				cout << k << " ";
				k++;
			}
		}

		if (i % 2 == 0)
			k++;
		
		cout << endl;
	}
} 
