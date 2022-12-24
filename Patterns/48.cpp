#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i, j, k;

    for (i = 1; i <= n; i++) {
        int num = 1;
        for (j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        num--;
        cout << "  ";
        for (j = 1; j <= i; j++) {
            cout << num;
            num--;
        }

        cout << endl;
    }
}