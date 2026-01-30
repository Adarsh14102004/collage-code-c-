#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // n is not used in this pattern

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {

            // First row or last row
            if (i == 0 || i == 4) {
                cout << "1 ";
            }
            // Last column
            else if (j == 3) {
                cout << "1 ";
            }
            // Center
            else if (i == 2 && j == 1) {
                cout << "6 ";
            }
            // Row 2 (index 1)
            else if (i == 1) {
                cout << j + 2 << " ";
            }
            // Row 4 (index 3)
            else if (i == 3) {
                cout << 4 - j << " ";
            }
            // Remaining middle
            else {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
