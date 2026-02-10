//fibbonaci series
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;

    if (N == 0) {
        cout << 0;
        return 0;
    }
    if (N == 1) {
        cout << 1;
        return 0;
    }

    for (int i = 2; i <= N; i++) {
        int c = a + b;
        a = b;
        b = c;
    }

    cout << b;
    return 0;
}
