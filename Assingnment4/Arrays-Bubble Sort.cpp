//Arrays-Bubble Sort
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[1000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                long long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << endl;

    return 0;
}