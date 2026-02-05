#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number: ";
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Middle row
            if (i == mid)
                cout << "* ";

            // Middle column
            else if (j == mid)
                cout << "* ";

            // Top-left horizontal
            else if (i == 0 && j <= mid)
                cout << "* ";

            // Top-right vertical
            else if (j == n - 1 && i <= mid)
                cout << "* ";

            // Bottom-left vertical
            else if (j == 0 && i >= mid)
                cout << "* ";

            // Bottom-right horizontal
            else if (i == n - 1 && j >= mid)
                cout << "* ";

            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}