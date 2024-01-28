#include<iostream>
#include<string>
using namespace std;

/**
Print below pattern on output.
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
 */

int main() {
    int n = 5;
    bool flag = false;
    for (int i = 0; i >= 0;) {
        for (int j = 0; j <= i; j++) {
            cout << '*' << ' ';
        }
        if (i == n) {
            flag = true;
        }
        if (!flag) {
            i++;
        }
        else {
            i--;
        }
        cout << "\n";
    }
    return 0;
}