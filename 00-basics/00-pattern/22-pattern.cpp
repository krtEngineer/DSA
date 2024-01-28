#include<iostream>
#include<algorithm>
using namespace std;
/**
 * Print below pattern on output.
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
 */

int main() {
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++) {
        int num = 0;
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i, left = j;
            int bottom = (2 * n - 1) - 1 - i, right = (2 * n - 1) - 1 - j;
            cout << n - min(min(left, right), min(top, bottom)) << ' ';
        }
        cout << "\n";
    }
    return 0;
}