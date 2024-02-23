#include<iostream>
#include<math.h>
using namespace std;

void isPrime(int n) {
    cout << "Is " << n << " prime: ";
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << false;
            cout << endl;
            return;
        }
    }
    cout << true;
    cout << endl;
}

int main() {
    /**
     * @brief
     * check if number is prime
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}