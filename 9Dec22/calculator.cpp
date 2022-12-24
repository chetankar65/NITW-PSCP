#include <iostream>
using namespace std;

int main() {
	char op;
	int a, b;
	cout << "Enter the operator: ";
	cin >> op;
	cout << "\nEnter number 1: ";
	cin >> a;
	cout << "\nEnter number 2: ";
	cin >> b;

	switch (op) {
		case '+': cout << "Sum: " << a + b; break;
		case '-': cout << "Difference: " << a - b; break;
		case '*': cout << "Multiplication: " << a * b; break;
		case '/': cout << "Division: " << (float) a / b; break;
		default : cout << "Symbol is wrong"; break;
	}

	cout << endl;
}
