#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
 */

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << (j + 1) << ' ';
        }
        cout << "\n";
    }
    return 0;
}