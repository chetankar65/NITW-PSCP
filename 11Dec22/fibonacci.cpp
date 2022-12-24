#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number of terms: ";
	cin >> n;

	int t1 = 0, t2 = 1;
	int i;

	for (i = 1; i <= n; i++) {
		if (i == 1) 
			cout << t1 << " ";
		else if (i == 2)
			cout << t2 << " ";
		else {
			int next_digit = t1 + t2;
			t1 = t2;
			t2 = next_digit;

			cout << next_digit << " ";
		}
	}

	cout << endl;
}
