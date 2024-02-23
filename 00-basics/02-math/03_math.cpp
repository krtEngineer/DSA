#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) {
        return false;
    }
    int revN = 0;
    int originalNum = n;
    while (n) {
        int remainder = n % 10;
        revN = (revN * 10) + remainder;
        n /= 10;
    }
    return revN == originalNum;
}

int main() {
    /**
     * @brief
     * Check palindrome
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << "Is " << n << " palindrome " << isPalindrome(n) << endl;
    }
    return 0;
}