#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int A[r][c];
    cout << endl;
    for (int i = 0; i < r; i++) {
        cout << "Enter row: ";
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
        cout << endl;
    }

    int leftIndex, rightIndex;
    leftIndex = 0, rightIndex = c - 1;

    for (int i = 0; i < r; i++){
        int temp = A[i][leftIndex];
        A[i][leftIndex] = A[i][rightIndex];
        A[i][rightIndex] = temp;

        leftIndex++;
        rightIndex--;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (A[i][j] < 10)
                cout << " " << A[i][j] << " ";
            else
                cout << A[i][j] << " ";
        }
        cout << endl;
    }
}