//Piyush and Magical Park
#include <iostream>
using namespace std;

int main() {
    int n, m, k, s;
    cin >> n >> m >> k >> s;

    char a[105][105];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s <= k) {
                cout << "No";
                return 0;
            }

            if (a[i][j] == '#') {
                break;
            }

            if (a[i][j] == '.') {
                s -= 2;
            } else if (a[i][j] == '*') {
                s += 5;
            }

            if (j != m - 1 && a[i][j] != '#') {
                s -= 1;
            }
        }
    }

    if (s > k) {
        cout << "Yes" << endl;
        cout << s;
    } else {
        cout << "No";
    }

    return 0;
}