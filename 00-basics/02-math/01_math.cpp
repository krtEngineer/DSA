#include<iostream>
using namespace std;

int getDigits(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    /**
     * @brief
     * Count digits in a number
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << "Number of digits in " << n << " are " << getDigits(n) << endl;
    }
    return 0;
}