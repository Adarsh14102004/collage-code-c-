//Finding CB Numbers
#include <bits/stdc++.h>
using namespace std;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

bool isCB(long long num) {
    if (num == 0 || num == 1) return false;

    for (int p : primes) {
        if (num == p) return true;
    }

    for (int p : primes) {
        if (num % p == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> visited(n, false);
    int count = 0;

    // substring length
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;

            // check overlap
            bool canUse = true;
            for (int k = i; k <= j; k++) {
                if (visited[k]) {
                    canUse = false;
                    break;
                }
            }

            if (!canUse) continue;

            // convert substring to number
            long long num = stoll(s.substr(i, len));

            // check CB number
            if (isCB(num)) {
                count++;

                // mark visited
                for (int k = i; k <= j; k++) {
                    visited[k] = true;
                }
            }
        }
    }

    cout << count;
    return 0;
}