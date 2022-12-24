#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 3 digit number: ";
    cin >> n;

    if (n / 1000 > 0 || n / 100 <= 0) {
        cout << "Please enter a 3 digit number." << endl;
    } else {
        // logic

        int check_correct = false;
        int original_num = n;
        int current_digit = n % 10;
        int prev_digit;
        n = n / 10;
        while (n > 0) {
            int prev_digit = current_digit;
            current_digit = n % 10;
            n /= 10;

            if (prev_digit > current_digit) {
                cout << "Incorrect number." << endl;
                check_correct = false;
                break;
            }
        }

        if (n == 0) {
            check_correct = true; // it is a correct number
        }

        if (check_correct) {
            cout << "It is a correct number." << endl;
        } else {
            cout << "It is an incorrect number." << endl;
        }

    }
}