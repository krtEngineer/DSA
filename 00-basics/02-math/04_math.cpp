#include<iostream>
using namespace std;

int getHcf(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    else {
        return a;
    }
}

int main() {
    /**
     * @brief
     * HCF or GCD
     * using Eucledian formula
     * GCD(a,b) = GCD(a - b, b) where a > b
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        cout << "HCF of " << a << " and " << b << " is " << getHcf(a, b) << endl;
    }
    return 0;
}