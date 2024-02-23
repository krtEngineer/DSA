#include<iostream>
#include<math.h>
using namespace std;

void printDivisors(int n) {
    cout << "Divisors of " << n << " are : ";
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << ", " << i;
            if (i != n / i) {
                cout << ", " << (n / i);
            }
        }
    }
    cout << endl;
}

int main() {
    /**
     * @brief
     * Print all divisors
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        printDivisors(n);
    }
    return 0;
}