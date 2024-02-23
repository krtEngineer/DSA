#include<iostream>
using namespace std;

int getReverse(int n) {
    int revN = 0;
    while (n) {
        int remainder = n % 10;
        revN = (revN * 10) + remainder;
        n /= 10;
    }
    return revN;
}

int main() {
    /**
     * @brief
     * Reverse a number
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << "Reverse of " << n << " is " << getReverse(n) << endl;
    }
    return 0;
}