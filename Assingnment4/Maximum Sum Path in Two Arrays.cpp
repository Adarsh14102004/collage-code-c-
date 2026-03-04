//Maximum Sum Path in Two Arrays
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long a[100000], b[100000];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        int i = 0, j = 0;
        long long sum1 = 0, sum2 = 0, result = 0;

        while (i < n && j < m) {
            if (a[i] < b[j]) {
                sum1 += a[i];
                i++;
            }
            else if (a[i] > b[j]) {
                sum2 += b[j];
                j++;
            }
            else {
                result += max(sum1, sum2) + a[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }

        while (i < n) {
            sum1 += a[i];
            i++;
        }

        while (j < m) {
            sum2 += b[j];
            j++;
        }

        result += max(sum1, sum2);

        cout << result << endl;
    }

    return 0;
}