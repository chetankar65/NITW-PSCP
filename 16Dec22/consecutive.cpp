#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int A[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << endl;

    int j, k;
    int max = 0;

    for (j = 0; j < n; j++) {
        int count = 0;
        int difference = 1;
        for (k = 0; k < n; k++) {
            if (A[k] - A[j] == difference) {
                count++;
                difference++;
                k = 0;
            }
        }

        if (count > max) {
            max = count;
        }
    }

    cout << max + 1 << endl;

}