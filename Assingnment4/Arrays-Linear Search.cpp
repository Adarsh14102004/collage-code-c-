// Arrays-Linear Search
#include <iostream>
using namespace std;

int findIndex(int arr[], int n, int m) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == m)
            return i;
    }
    return -1;
}

int main() {
    int N;
    cin >> N;
    int arr[100000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int M;
    cin >> M;

    cout << findIndex(arr, N, M);

    return 0;
}
