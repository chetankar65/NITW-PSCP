#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i, j, k, m;

    for (i = 2; i <= n; i++) {
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                break;
            }

            if (j == i/2 + 1) { // figured out first prime here
                for (k = 2; k <= n; k++) {
                    for (m = 2; m <= k/2; m++) {
                        if (k % m == 0)
                            break;
                    }

                    if (m == k/2 + 1)
                        break;
                }

                break;
            }
        }

        if (i + j == n) {
            cout << "YES" << endl;
            break;
        }

        if (i == n) {
            cout << "NO" << endl;
            break;
        }
    }
}


