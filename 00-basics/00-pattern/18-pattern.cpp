#include<iostream>
using namespace std;
/**
Print below pattern on output.
E
D E
C D E
B C D E
A B C D E
*/

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        int charNumValue = 'E' - 0 - i;
        for (int j = 0; j <= i; j++) {
            cout << (char)(charNumValue) << ' ';
            charNumValue++;
        }
        cout << "\n";
    }
    return 0;
}