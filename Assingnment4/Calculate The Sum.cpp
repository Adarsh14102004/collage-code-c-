//Calculate The Sum
#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long modPow(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main() {
    int N;
    cin >> N;

    long long sum = 0, x, Q;

    for (int i = 0; i < N; i++) {
        cin >> x;
        sum = (sum + x) % MOD;
    }

    cin >> Q;

    for (int i = 0; i < Q; i++)
        cin >> x;

    long long ans = (sum * modPow(2, Q)) % MOD;

    cout << ans;
    return 0;
}