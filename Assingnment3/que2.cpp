// print reverse of a number
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int rev = 0;

    while (N > 0) {
        rev = rev * 10 + (N % 10);
        N = N / 10;
    }

    cout << rev;

    return 0;
}
