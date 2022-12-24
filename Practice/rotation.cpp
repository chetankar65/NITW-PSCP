#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int A[n] {1, 2, 3, 4, 5, 6, 7};

    int d;
    cout << "Enter number of elements to rotate by: ";
    cin >> d;

    int rotations_done = 0;
    while (rotations_done < d) {
        int first = A[0];
        for (int i = 1; i < n; i++) {
            A[i - 1] = A[i];
        }

        A[n-1] = first;
        rotations_done++;
    }

    cout << "{";
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << A[i];
        } else {
            cout << "," << A[i];
        }
    }

    cout << "}";

}