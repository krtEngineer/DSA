#include<iostream>
#include<string>
using namespace std;

/**
Print below pattern on output.
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
A B C D E D C B A
  A B C D C B A
    A B C B A
      A B A
        A
 */

int getMaxJ(int n, int i, string direction) {
    if (direction == "spread") {
        return n - 1 + i;
    }
    else if (direction == "collapse") {
        return 2 * (n - 1) - i;
    }
    else {
        return -1;
    }
}

int getMinJ(int n, int i, string direction) {
    if (direction == "spread") {
        return n - 1 - i;
    }
    else if (direction == "collapse") {
        return i;
    }
    else {
        return -1;
    }
}

void printPattern(int min_j, int max_j, int n) {
    bool flag = false;
    int charNumberValue = 'A' - 0;
    for (int j = 0; j <= max_j; j++) {
        if (j >= min_j && j <= max_j) {
            if (j == (n - 1)) {
                flag = true;
            }
            cout << (char)charNumberValue << ' ';
            if (!flag) {
                charNumberValue++;
            }
            else {
                charNumberValue--;
            }
        }
        else {
            cout << ' ' << ' ';
        }

    }
    cout << "\n";
}

void showPattern(int n, string direction) {
    for (int i = 0; i < n; i++) {
        int min_j = getMinJ(n, i, direction), max_j = getMaxJ(n, i, direction);
        printPattern(min_j, max_j, n);
    }
}


int main() {
    int n = 5;
    showPattern(n, "spread");
    showPattern(n, "collapse");
    return 0;
}