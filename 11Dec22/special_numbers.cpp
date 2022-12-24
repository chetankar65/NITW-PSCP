#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter a number: ";
	cin >> N;
	cout << endl;
		
	int i;

	for (i = 1111; i <= 9999; i++) {
		int temp = i;
		while (temp > 0) {
			int digit = temp % 10;
			if (digit != 0) {
				if (N % digit != 0) 
					break;
			} else {
				break;
			}

			temp = temp / 10;
		}

		if (temp == 0) {
			cout << i << " ";
		}
	}

	cout << endl;
}
