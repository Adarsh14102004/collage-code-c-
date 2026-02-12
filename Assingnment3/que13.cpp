// GCD of two numbers
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    long long N1, N2;
    cin >> N1;
    cin >> N2;
    cout << gcd(N1, N2);
    return 0;
}
