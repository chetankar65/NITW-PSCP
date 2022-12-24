#include <iostream>
using namespace std;

int main() {
	int i, j, add_factor;
	
	int k;
	int n; // number of rows
	
	n = 5;

	for (i = 1; i <= n; i++) {
		add_factor = 4;
		cout << i << " ";
		k = i + add_factor;
		for (j = 1; j < i; j++) {
			cout << k << " ";
			add_factor--;
			k = k + add_factor;	
		}
		cout << endl;
	
	}


}
