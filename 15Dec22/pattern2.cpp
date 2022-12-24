#include <iostream>
using namespace std;

int main() {
    int n = 5, i, j, gap, num;
    gap = n - 1;

    for (i = 1; i <= n; i++) {
        num = i;

        for (j = 1; j <= gap; j++) {
            cout << " ";
        }

        gap--;

        for (j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        num--;
        num--;

        for (j = 1; j < i; j++) {
            cout << num;
            num--;
        }
    }
}