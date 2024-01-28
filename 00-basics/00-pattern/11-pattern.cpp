#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 */

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        int currChar = !(i % 2);
        for (int j = 0; j <= i; j++) {
            cout << currChar << ' ';
            currChar = !currChar;
        }
        cout << "\n";
    }
    return 0;
}