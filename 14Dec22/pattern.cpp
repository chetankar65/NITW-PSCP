#include <iostream>
using namespace std;

int main() {
    int cols, start_col, max_num, pattern_num;
    cout << "Enter columns, start column, maximum numner and number of patterns: ";
    cin >> cols >> start_col >> max_num >> pattern_num;
    cout << endl;

    int i, j, k;
    k = 1;
    start_col++;
    for (i = 1; i <= pattern_num; i++)  { 
        for (j = 1; j <= cols; j++) {
            if (k > max_num) {
                k = 1;
                start_col = j;
                break;
            }

            if (j < start_col) {
                cout << " " << " " << " ";
            } else {
                if (k < 10) {
                    cout << " " << k << " ";
                    k++;
                } else {
                    cout << k << " ";
                    k++;
                }

                start_col = 1;
            }

            if (j == cols) {
                j = 0;
                cout << endl;
            }
        }
        cout << endl;
    } 
}