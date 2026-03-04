// Pair of Roses
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[10000];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        int M;
        cin >> M;

        sort(arr, arr + N);

        int l = 0, r = N - 1;
        int a = 0, b = 0;

        while (l < r) {
            int sum = arr[l] + arr[r];

            if (sum == M) {
                a = arr[l];
                b = arr[r];
                l++;
                r--;
            }
            else if (sum < M)
                l++;
            else
                r--;
        }

        cout << "Deepak should buy roses whose prices are " << a << " and " << b << "." << endl;
        if (T) cout << endl;
    }

    return 0;
}
