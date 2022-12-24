#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    cout << "\nEnter elements of array: ";

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int B[n];

    int min;
    int index = 0;
    int lowest;
    for (int i = 0; i < n; i++) {
        min = A[i];

        for (int j = 0; j < n; j++) {
            
        }

        B[index++] = min;
    }

    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }

    cout << endl;
}