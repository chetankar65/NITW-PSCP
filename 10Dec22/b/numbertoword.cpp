#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	if (n > 10000) 
		cout << "Enter a number less than 10000";
	else {
		int division_factor = 1;

		while (n / division_factor > 0) {
			division_factor *= 10;
		}

		division_factor /= 10;

		// now that we know the division factor
		int tens_place = 0;
		while (division_factor > 0) {
			int digit = n / division_factor;
			if (division_factor ==  1000) {
				switch(digit) {
					case 1: cout << "One thousand "; break;
					case 2: cout << "Two thousands "; break;
					case 3: cout << "Three thousands "; break;
					case 4: cout << "Four thousands "; break;
					case 5: cout << "Five thousands "; break;
					case 6: cout << "Six thousands "; break;
					case 7: cout << "Seven thousands "; break;
					case 8: cout << "Eight thousands "; break;
					case 9: cout << "Nine thousands "; break;
					
				}

				n = n % division_factor;
				division_factor /= 10;

			} else if (division_factor == 100) {
				switch (digit) {
					case 1: cout << "One hundred "; break;
					case 2: cout << "Two hundreds "; break;
					case 3: cout << "Three hundreds "; break;
					case 4: cout << "Four hundreds "; break;
					case 5: cout << "Five hundreds "; break;
					case 6: cout << "Six hundreds "; break;
					case 7: cout << "Seven hundreds "; break;
					case 8: cout << "Eight hundreds "; break;
					case 9: cout << "Nine hundreds "; break;
				}

				n = n % division_factor;
				division_factor /= 10;

			} else if (division_factor == 10) {
				switch(digit) {
					case 1: tens_place = 1; break;
					case 2: cout << "Twenty "; break;
					case 3: cout << "Thirty "; break;
					case 4: cout << "Forty "; break;
					case 5: cout << "Fifty "; break;
					case 6: cout << "Sixty "; break;
					case 7: cout << "Seventy "; break;
					case 8: cout << "Eighty "; break;
					case 9: cout << "Ninety "; break;
				}

				n = n % division_factor;
				division_factor /= 10;
			} else {
				if (tens_place == 1) {
					switch(digit) {
						case 1: cout << "Eleven "; break;
						case 2: cout << "Twelve "; break;
						case 3: cout << "Thirteen "; break;
						case 4: cout << "Fourteen "; break;
						case 5: cout << "Fifteen "; break;
						case 6: cout << "Sixteen "; break;
						case 7: cout << "Seventeen "; break;
						case 8: cout << "Eighteen "; break;
						case 9: cout << "Nineteen "; break;
					}
				} else {
					switch(digit) {
						case 1: cout << "One "; break;
						case 2: cout << "Two "; break;
						case 3: cout << "Three "; break;
						case 4: cout << "Four "; break;
						case 5: cout << "Five "; break;
						case 6: cout << "Six "; break;
						case 7: cout << "Seven "; break;
						case 8: cout << "Eight "; break;
						case 9: cout << "Nine "; break;
					}
				}

				n = n % division_factor;
				division_factor /= 10;
			}
		
		}
		
		cout << endl;	
	
	}


}
