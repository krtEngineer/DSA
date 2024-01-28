#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
 1             1
 1 2         2 1
 1 2 3     3 2 1
 1 2 3 4 4 3 2 1
 */

bool isPlaceValid(int i, int j, int n) {
    return (j <= i || j >= (n - 1 - i));
}
int main() {
    int n = 8;
    for (int i = 0; i < n / 2; i++) {
        int num = 0;
        for (int j = 0; j < n; j++) {
            if (isPlaceValid(i, j, n)) {
                if (j >= n / 2) {
                    cout << num << ' ';
                    num--;
                }
                else {
                    num++;
                    cout << num << ' ';
                }

            }
            else {
                cout << ' ' << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}