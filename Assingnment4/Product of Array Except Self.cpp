//Product of Array Except Self
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[100000], prefix[100000], suffix[100000], output[100000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    prefix[0] = 1;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * arr[i - 1];

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * arr[i + 1];

    for (int i = 0; i < n; i++)
        output[i] = prefix[i] * suffix[i];

    for (int i = 0; i < n; i++)
        cout << output[i] << " ";

    return 0;
}