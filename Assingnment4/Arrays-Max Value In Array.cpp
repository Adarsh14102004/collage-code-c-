//Arrays-Max Value In Array
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[1000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    long long mx = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > mx)
            mx = arr[i];
    }

    cout << mx;

    return 0;
}