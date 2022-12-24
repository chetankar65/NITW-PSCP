#include <iostream>
using namespace std;

int main() {
	int n, i;
	cout << "Enter number of terms: ";
	cin >> n;
	cout << endl;

	int sum = 0;
	int k = 0;

	for (i = 1; i <= n; i++) {
		k = (k * 10) + 1;
		if (i == n)
			cout << k << "=";
		else
			cout << k << "+";
		sum += k;	
	}

	cout << sum << endl;
	cout << "The sum of the series is " << sum << endl;

}
