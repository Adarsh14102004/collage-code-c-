#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pos = 1;
    int inv = 0;

    while (n > 0) {
        int d = n % 10;

        int place = 1;
        for (int i = 1; i < d; i++)
            place = place * 10;

        inv = inv + (pos * place);

        pos = pos + 1;
        n = n / 10;
    }

    cout << inv;
}
