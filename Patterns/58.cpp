#include <iostream>
using namespace std;

int main() {
    // add logic for stars
    int n = 3;
    int rows = (2*n) - 1;
    int top = rows/2 + 1;
    int bottom = rows - top;

    int i, j, k;

    cout << "*" << endl;
    for (i = 1; i <= top; i++) {
        int num = 1;
        cout << "*";
        for (j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        num--;
        for (j = 1; j < i; j++) {
            num--;
            cout << num;
        }
        cout << "*";
        cout << endl;
    }

    for (i = bottom; i >= 1; i--) {
        int num = 1;
        cout << "*";
        for (j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        num--;
        for (j = 1; j < i; j++) {
            num--;
            cout << num;
        }
        cout << "*";
        cout << endl;
    }

    cout << "*" << endl;
}