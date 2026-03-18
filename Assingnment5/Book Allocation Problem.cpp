//
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &bookBook Allocation Problems, int n, int m, int maxPages) {
    int students = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        if (books[i] > maxPages) return false;

        if (pagesSum + books[i] <= maxPages) {
            pagesSum += books[i];
        } else {
            students++;
            pagesSum = books[i];

            if (students > m) return false;
        }
    }
    return true;
}

int allocateBooks(vector<int> &books, int n, int m) {
    if (m > n) return -1;

    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(books, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> books(n);
        for (int i = 0; i < n; i++) {
            cin >> books[i];
        }

        cout << allocateBooks(books, n, m) << endl;
    }

    return 0;
}