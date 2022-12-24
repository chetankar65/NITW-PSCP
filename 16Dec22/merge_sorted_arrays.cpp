#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter sizes of the two arrays: ";
    cin >> m >> n;

    int A[m], B[n];
    cout << "\nEnter values for first array: ";

    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    cout << "\nEnter values for second array: ";

    for (int j = 0; j < n; j++) {
        cin >> B[j];
    }
    cout << "\nC: ";
    int C[m + n];

    int p, q, r = 0;

    for (int i = 0; i < m; i++) {
        C[i] = A[i];
    }

    for(p = 0; p < n; p++) {
        bool inserted = false;
        for (q = 1; q < m + n; q++) {
            int prev;
            if (B[p] > C[q-1] && B[p] < C[q]) {
                prev = C[q];
                C[q] = B[p];
                inserted = true;
                continue;
            }

            if (inserted == true) {
                int temp = C[q];
                C[q] = prev;
                prev = temp;
            }
        }
    }

    for (int i = 0; i < m+n; i++) {
        cout << C[i] << " ";
    }
}