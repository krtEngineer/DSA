#include<iostream>
using namespace std;
/**
Print below pattern on output.
ABCDE
ABCD
ABC
AB
A
*/

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        int charNumValue = 0;
        for (int j = 0; j < n - i; j++) {
            cout << (char)(charNumValue + ('A' - 0)) << ' ';
            charNumValue++;
        }
        cout << "\n";
    }
    return 0;
}