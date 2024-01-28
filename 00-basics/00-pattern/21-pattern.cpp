#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
* * * * * * * * * *
*                 *
*                 *
*                 *
*                 *
*                 *
*                 *
*                 *
*                 *
* * * * * * * * * *
 */

bool isPlaceValid(int i, int j, int n) {
    return i == 0 || i == n - 1 || j == 0 || j == n - 1;

}
int main() {
    int n = 10;
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