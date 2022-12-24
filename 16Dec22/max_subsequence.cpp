#include <iostream>
using namespace std;

int main() {
    int max = 25;
    int n;
    int A[max];

    int max_size = 0;
    cout << "Enter terms of the array: ";
    for (int i = 0; i < max; i++) {
        cin >> n;
        if (n == -1) {
            A[i] = n;
            break;
        }

        A[i] = n;
    }
    
    cout << "The increasing subsequences are: " << endl;

    int j = 0;
    int max_count = 0;
    while (A[j] != -1) {
        int k = j + 1;
        cout << "{" << A[j];
        int count = 1;
        while (A[k] >= A[k - 1] && A[k] != -1) {
            cout << " " << A[k];
            k++;
            count++;
        }   

        if (count > max_count) {
            max_count = count;
        }
        cout << "} ";
        j = k;
    }

    cout << "\nMaximum sub sequence length is " << max_count;
    
}