#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int A[r][c+1];

    for (int i = 0; i < r; i++) {
        cout << "\nEnter array: ";
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++) {
        int max = 0;
        for (int j = 0; j < c; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }

        A[i][c] = max; 
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c+1; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}