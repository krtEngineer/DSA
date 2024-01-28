#include<iostream>
using namespace std;
/**
 * Print below pattern on output.
               *
            *  *  *
         *  *  *  *  *
      *  *  *  *  *  *  *
    * *  *  *  *  *  *  *  *
 */

int main() {
    int n = 9;
    //Extra row count.
    int exRowCount = 0;
    for (int i = 4; i >= 0; i--) {
        int min_j = i, max_j = i + exRowCount;
        for (int j = 0; j <= max_j; j++) {
            if (j >= min_j && j <= max_j) {
                cout << '*' << ' ';
            }
            else {
                cout << ' ' << ' ';
            }
        }
        exRowCount += 2;
        cout << "\n";
    }
    return 0;
}