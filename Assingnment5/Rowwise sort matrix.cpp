//Rowwise sort matrix
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[100][100];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        sort(a[i], a[i] + c);
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}