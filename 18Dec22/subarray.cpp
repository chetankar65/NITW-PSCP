#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int A[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int sub[n];

    int count = 0;
    int first_index, last_index;
    int max_sum = A[0], current_sum = 0;
    for (int i = 0; i < n; i++) {
        current_sum = A[i];
        for (int j = i+1; j < n; j++) {
            current_sum += A[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
                first_index = i;
                last_index = j;
            }
        }
    }

    cout << "{";
    for (int i = first_index; i <= last_index; i++) {
        if (i == first_index) {
            cout << A[i];
        } else {
            cout << "," << A[i];
        }
    }

    cout << "}" << endl;

}
