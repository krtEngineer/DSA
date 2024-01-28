#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
 */

bool isPlaceValid(int i, int j, int n) {
    if (i <= n / 2) {
        return (j <= (n / 2 - i) || j >= (n / 2 + i));
    }
    else {
        return (j <= (i - n / 2) || j >= (n / 2 + n - 1 - i));
    }

}
int main() {
    int n = 9;
    for (int i = 0; i < n; i++) {
        int num = 0;
        for (int j = 0; j < n; j++) {
            if (isPlaceValid(i, j, n)) {
                cout << '*' << ' ';
            }
            else {
                cout << ' ' << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}