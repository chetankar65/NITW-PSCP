#include <iostream>
using namespace std;

int main() {
    // union and intersection   
    /*
    Input Arrays :
    [2, 3, 4, 7, 1]
    [4, 1, 3, 5]
    [8, 4, 6, 2, 1]
    [7, 9, 4, 1] 
    */

    int A[5] = {2, 3, 4, 7, 1};
    int B[4] = {4, 1, 3, 5};
    int C[5] = {8, 4, 6, 2, 1};
    int D[4] = {7, 9, 4, 1};

    int u[19];

    for (int i = 0; i < 19; i++) {
        u[i] = 0;
    }

    int index;
    for (int i = 0; i < 5; i++) {
        u[i] = A[i];
        index = i;
    }

    index++;

    for (int i = 0; i < 4; i++) {
        int j;
        for (j = 0; j < 19; j++) {
            if (B[i] == u[j]) {
                break;
            }
        }

        if (j == 19) {
            u[index++] = B[i];
        }
    }

    for (int i = 0; i < 19; i++) {
        cout << u[i] << " ";
    }

    cout << endl;


    
}