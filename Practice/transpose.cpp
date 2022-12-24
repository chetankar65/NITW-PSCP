#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[n][n];

    cout << "A: " << endl; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    cout << "Transpose(A): " << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }

        cout << endl;
    }

}