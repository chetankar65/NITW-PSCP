#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of both arrays: ";
    cin >> n1 >> n2;

    int A[n1], B[n2];

    cout << "Enter elements of array 1: ";
    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }

    cout << "\nEnter elements of array 2: ";
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    int sum;
    cout << "\nEnter sum: ";
    cin >> sum;
    int min = A[0];
    int first , last;
    cout << "The closest pair is ";
    for (int i = 0; i < n1; i++) {
        for (int j = n2; j >= 0; j--) {
            int diff = abs(sum - (A[i] + B[j]));
            if (diff <= min) {
                min = diff;
                first = A[i];
                last = B[j];
            }
        }
    }

    cout << "[" << first << "," << last << "] ";

    cout << endl;
}