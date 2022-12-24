#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number of rows and columns: ";
    cin >> n;

    int dir = 1; // 2 , 3 , 4 // left, down, right, up
    int A[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }

    int num = 1;
    for (int i = 0; i < n; i++) {
        // right
        if (dir == 1) {
            for (int j = i; j < n - i; j++) {
                A[i][j] = num;
                num++;
            }

            dir = 2;
        }
        // down
        if (dir == 2) {
            for (int k = i + 1;  k < n - i; k++) {
                A[k][n-1-i] = num;
                num++;
            }

            dir = 3;
        } 
        // left
        if (dir == 3) {
            for (int k = n-2-i; k >= i; k--) {
                A[n-1-i][k] = num;
                num++;
            }

            dir = 4;
        }
        // up
        if (dir == 4) {
            for (int k = n-2-i; k > i; k--) {
                A[k][i] = num;
                num++;
            }

            dir = 1;
        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] < 10)
                cout << " " << A[i][j] << " ";
            else
                cout << A[i][j] << " ";
        }

        cout << endl;
    }
}