// binary to decimal 
#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0;
    int base = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * base;
        base = base * 2;
        n = n / 10;
    }

    return decimal;
}

int main() {
    int N;
    cin >> N;

    cout << binaryToDecimal(N);

    return 0;
}
