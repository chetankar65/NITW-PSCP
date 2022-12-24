#include <iostream>
using namespace std;

int main() {
    int n, m;
    int A[5] = {2, 3, 4, 7, 1};
    int B[4] = {4, 1, 3, 5};
    int C[5] = {8, 4, 6, 2, 1};
    int D[5] = {7, 9, 4, 1};

    int res[19];
    res[0] = A[0];
    int index = 1;
    

    for (int i = 0; i < 19; i++) {
        cout << res[i] << " ";
    }

    cout << endl;
}



