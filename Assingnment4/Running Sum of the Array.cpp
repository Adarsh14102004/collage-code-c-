//Running Sum of the Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[1000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout << sum << " ";
    }

    return 0;
}