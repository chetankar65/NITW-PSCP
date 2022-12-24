#include <iostream>
using namespace std;

int main() {
	int i, j, n, k;
	n = 5;

	for (i = 1; i <= n; i++) {
		k = i;
		for (j = 1; j <= i; j++) {
			cout << k << " ";
			k = k + 5 - j;
		}

		cout << endl;
	
	}
	
	
	return 0;
}
