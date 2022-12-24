#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols];
    cout << endl;
    for (int i = 0; i < rows; i++) {
        cout << "Enter row: ";
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int r = i, c = 0; r >= 0 && c < cols; r--, c++) {
            cout << A[r][c] << " ";
        }

        cout << endl;
    }

    for (int i = 1; i < cols; i++) {
        for (int r = rows - 1, c = i; r >= 0 && c < cols; r--, c++) {
            cout << A[r][c] << " ";
        }

        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < cols; i++) {
        for (int c = i, r = 0; r < rows && c >= 0; r++, c--) {
            cout << A[r][c] << " ";
        }

        cout << endl;
    }

    
}