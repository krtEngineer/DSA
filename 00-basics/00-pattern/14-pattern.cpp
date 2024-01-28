#include<iostream>
using namespace std;
/**
Print below pattern on output.
A
AB
ABC
ABCD
ABCDE
*/

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        int charNumValue = 0;
        for (int j = 0; j <= i; j++) {
            cout << (char)(charNumValue + ('A' - 0)) << ' ';
            charNumValue++;
        }
        cout << "\n";
    }
    return 0;
}