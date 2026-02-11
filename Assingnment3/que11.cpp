#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool isArmstrong(long long n) {
    long long temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    long long sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        sum += power(d, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    long long n;
    cin >> n;

    if (isArmstrong(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
