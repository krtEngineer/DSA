#include<iostream>
using namespace std;

/**
Print below pattern on output.
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

 */

int main() {
    int n = 9;
    for (int i = 0; i < n; i++) {
        int min_j = i, max_j = n - i;
        for (int j = 0; j < max_j; j++) {
            if (j >= min_j && j < max_j) {
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