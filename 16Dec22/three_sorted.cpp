#include <iostream>
using namespace std;

int main() {
    int arr1[3] = {2, 4, 8};
    int arr2[6] = {2, 3, 4, 8, 10, 16};
    int arr3[4] = {4, 8, 14, 40};

    cout << "Common elements from three sorted (in non decreasing order) arrays:";
    int i, j, k;

    cout << "[";
    int count = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            for (k = 0; k < 4; k++) {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k] && arr3[k] == arr1[i]) {
                    if (count == 0) {
                        cout << arr1[i];
                        count++;
                    } else {
                        cout << "," << arr1[i];
                        count++;
                    }
                }
            }
        }
    }
    cout << "]";
}