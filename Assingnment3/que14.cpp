// count digit
#include <iostream>
using namespace std;

int countDigit(int n, int d) {
    int cnt = 0;
    if (n == 0 && d == 0) return 1;
    while (n > 0) {
        int r = n % 10;
        if (r == d) cnt++;
        n = n / 10;
    }
    return cnt;
}

int main() {
    int n, d;
    cin >> n >> d;
    cout << countDigit(n, d);
    return 0;
}
