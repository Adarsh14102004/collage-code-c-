//Arrays-Insertion Sort
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int N;
    cin >> N;

    int arr[1000];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    insertionSort(arr, N);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}