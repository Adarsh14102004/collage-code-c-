//Sort just Zeroes and Ones
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long zero = 0, one = 0, x;

    for (long long i = 0; i < n; i++) {
        cin >> x;
        if (x == 0)
            zero++;
        else
            one++;
    }

    for (long long i = 0; i < zero; i++)
        cout << 0 << " ";

    for (long long i = 0; i < one; i++)
        cout << 1 << " ";

    return 0;
}