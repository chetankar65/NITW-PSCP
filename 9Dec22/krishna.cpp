#include <iostream>
using namespace std;

int main() {
	int n, original;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;
	
	int sum = 0; // declaring
	original = n;
	int digit, i;
	while (n > 0) {
		digit = n % 10;
		int product = 1;
		for (i = 1; i <= digit; i++)
			product = product * i;

		sum = sum + product;

		n = n / 10;
	}
	

	//cout << sum << endl;
	if (sum == original) 
		cout << "It is a krishnamurthy number." << endl;
	else 
		cout << "It is not a krisnamurthy number." << endl;

}
