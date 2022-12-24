#include <iostream>
using namespace std;

int main() {
    int A[10] = {7,5,8,9,6,8,5,7,4,6};

    int i, j;
    for (i = 0; i < 10; i++) {
        int max = 0;
        for (j = i; j < 10; j++) {
            if (A[j] >= max) {
                max = A[j];
            }
        }

        A[i] = max;
    }

    for (int k = 0; k < 10; k++) {
        cout << A[k] << " ";
    }

    cout << endl;

}