//Aggressive Cows
#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int> &stalls, int n, int cows, int dist) {
    int count = 1;  // first cow placed
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= dist) {
            count++;
            lastPos = stalls[i];

            if (count == cows) return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int n, int cows) {
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls[n - 1] - stalls[0];
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canPlace(stalls, n, cows, mid)) {
            ans = mid;
            low = mid + 1;  // try bigger distance
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    cout << aggressiveCows(stalls, n, c);

    return 0;
}