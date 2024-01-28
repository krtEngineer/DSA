#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
 * * * * *
 * * * *
 * * *
 * *
 *
 */

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            cout << '*' << ' ';
        }
        cout << "\n";
    }
    return 0;
}