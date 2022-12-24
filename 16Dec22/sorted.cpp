#include <iostream>
using namespace std;

int main() {
    int A[25];
    
    for (int i = 0; i < 7; i++) {
        cin >> A[i];
    }
    int e;
    cin >> e;
    cout << "-----------" << endl;
    bool inserted = false;
    int prev_number;
    for (int j = 1; j < 8; j++) {
        if (A[j] >= e && A[j - 1] <= e) {
            prev_number = A[j];
            cout << prev_number << endl;
            A[j] = e;
            inserted = true;
            continue;
        }

        if (inserted == true) {
            int temp = A[j];
            A[j] = prev_number;
            prev_number = temp;
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }

    cout << endl;
}