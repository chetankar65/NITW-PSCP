#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "\nEnter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int i = 0, j = n-1;
    int merge_operations = 0;
    bool check_palindrome = false;
    while (!check_palindrome) {
        if (A[i] == A[j]) {
            if (i >= j) {
                check_palindrome = true;
            }
        } else {
            int sum = A[i] + A[i+1];
            if (sum == A[j]) {
                i++;
                i++;
                j--;
                merge_operations++;
            }

            sum = A[j] + A[j-1];
            if (sum == A[i]) {
                i++;
                j--;
                j--;
                merge_operations++;
            }

            if (i >= j) {
                check_palindrome = true;
            }
        }

        i++;
        j--;
    }

    cout << merge_operations << " merge operations are needed." << endl;
}