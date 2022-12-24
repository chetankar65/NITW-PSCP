#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "\nEnter elements one by one: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int res[n];
    for (int i = 0; i < n; i++) {
        res[i] = 0;
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i+1; j < n; j++) {
            if (A[i] == A[j]) {
                count++;
            }
        }

        int k;
        for (k = 0; k < n; k++) {
            if (A[i] == res[k]) {
                break;
            }
        }

        if (k >= n) {
            for (int l = 0; l < count; l++) {
                res[index++] = A[i];
            }
        }
    }

    // output the array
    cout << "{";
    for (int j = 0; j < n; j++) {
        if (j == 0) {
            cout << res[j];
        } else {
            cout << "," << res[j];
        }
    }

    cout << "}" << endl;

}
