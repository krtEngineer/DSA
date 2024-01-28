#include<iostream>
using namespace std;
/**
Print below pattern on output.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

int main() {
    int n = 5, count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            count++;
            cout << count << ' ';
        }
        cout << "\n";
    }
    return 0;
}