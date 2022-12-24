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

    int neg[n];
    int pos[n];

    int neg_count = 0, pos_count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0)
            pos[pos_count++] = A[i];
        else
            neg[neg_count++] = A[i];
    }

    cout << "{";
    int n_index = 0, p_index = 0;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            if (p_index < pos_count){
                if (j == 0) {
                    cout << pos[p_index++];
                } else {
                    cout << "," << pos[p_index++];
                }
            }
        } else {
            if (n_index < neg_count){
                if (j == 0) {
                    cout << neg[n_index++];
                } else {
                    cout << "," << neg[n_index++];
                }
            }
        }
    }

    if (p_index < pos_count) {
        cout <<  "," << pos[p_index++];
    }

    if (n_index < neg_count) {
        cout << "," << neg[n_index++];
    }

    
    cout << "}" << endl;

}