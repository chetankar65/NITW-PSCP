#include <iostream>
using namespace std;

int main() {
    int A[11] = {2,3,4,2,5,4,2,2,6,7,8};;

    int max_repeated_times = 0;
    int repeated_num;
    int j, k;
    for (j = 0; j < 11; j++) {
        int repeated_count;
        repeated_count = 1;

        for (int k = j + 1; k < 11; k++) {
            if (A[j] == A[k]) {
                repeated_count++;
            }
        }

        if (repeated_count > max_repeated_times) {
            max_repeated_times = repeated_count;
            repeated_num = A[j];
        }
    }

    cout << repeated_num << " is repeated for " << max_repeated_times << " times";
}