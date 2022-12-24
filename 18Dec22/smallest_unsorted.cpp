#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    int A[n];
    cout << "\nEnter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << endl;

    int i, j; // will solve using two pointers
    int first, last;

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (A[j] < A[i]) {
                first = i;
                break;
            }
        }

        if (first == i) {
            break;
        }
    }

    for (i = n-1; i >= 0; i--) {
        for (j = i-1; j >= 0; j--) {
            if (A[j] > A[i]) {
                last = i;
                break;
            }
        }

        if (last == i) {
            break;
        }
    }

    cout << "Unsorted sub-Array is from index " << first << " to " << last << endl;
}