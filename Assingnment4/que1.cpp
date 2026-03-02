// Inverse of an array
#include <iostream>
using namespace std;

void inverseArray(int arr[], int inv[], int n, int i) {
    if (i == n) return;
    inv[arr[i]] = i;
    inverseArray(arr, inv, n, i + 1);
}

int main() {
    int N;
    cin >> N;
    int arr[1000], inv[1000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    inverseArray(arr, inv, N, 0);

    for (int i = 0; i < N; i++)
        cout << inv[i] << " ";

    return 0;
}