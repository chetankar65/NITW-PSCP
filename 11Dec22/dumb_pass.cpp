#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "Enter n (digits): ";
	cin >> n;
	cout << "\nEnter m (letters): ";
	cin >> m;
	
	int i, j, k, a, b;
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			for (k = 1; k <= m; k++) {
				for (a = 1; a <= m; a++) {
					for (b = 1; b <= n; b++) {
						if (b > i && b > j) {
							cout << i << j << (char) ('a' + k - 1) << (char) ('a' + a - 1) << b << " ";
						}
					}
				}
			}
		}
	}

	cout << endl;
}
