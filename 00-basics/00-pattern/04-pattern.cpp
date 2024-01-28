#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
 * 1
 * 2 2
 * 3 3 3
 * 4 4 4 4
 * 5 5 5 5 5
 */

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1 << ' ';
        }
        cout << "\n";
    }
    return 0;
}