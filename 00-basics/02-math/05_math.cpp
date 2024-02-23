#include<iostream>
#include<math.h>
using namespace std;

bool isArmstrong(int n) {
    int digits = 0;
    int originalNum = n;
    while (n) {
        digits++;
        n /= 10;
    }
    int sumOfPower = 0;
    n = originalNum;
    while (n) {
        int digit = n % 10;
        sumOfPower += pow(digit, digits);
        n /= 10;
    }
    return sumOfPower == originalNum;
}

int main() {
    /**
     * @brief
     * Check if number is Armstrong or not
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << "Is " << n << " Armstrong " << isArmstrong(n) << endl;
    }
    return 0;
}