#include <iostream>
using namespace std;

void printPattern(int n) {
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        int r = i <= mid ? i : n - i - 1;

        // Print leading spaces
        for (int s = 0; s < mid - r; s++) {
            cout << "  ";
        }

        // Print left side (decreasing)
        for (int j = r + 1; j >= 1; j--) {
            cout << j << " ";
        }

        // Print gap between left and right
        if (i != mid) {
            for (int s = 0; s < 2 * (mid - r) - 1; s++) {
                cout << "  ";
            }

            // Print right side (increasing)
            for (int j = 1; j <= r + 1; j++) {
                cout << j << " ";
            }
        }

        cout << endl;
    }
}

int main() {
    int n = 7; // Must be odd
    printPattern(n);
    return 0;
}
