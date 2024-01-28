#include<iostream>
using namespace std;
/**
Print below pattern on output.
A
BB
CCC
DDDD
EEEEE
*/

int main() {
    int n = 5;
    int charNumValue = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << (char)(charNumValue + ('A' - 0)) << ' ';
        }
        charNumValue++;
        cout << "\n";
    }
    return 0;
}