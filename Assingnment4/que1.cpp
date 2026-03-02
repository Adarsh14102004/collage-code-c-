// Inverse of an array
#include <iostream>
using namespace std;

void invert(int arr[], int start, int end) {
    if (start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    invert(arr, start + 1, end - 1);
}

int main() {
    int N;
    cin >> N;
    int arr[1000];
    for (int i = 0; i < N; i++) cin >> arr[i];
    invert(arr, 0, N - 1);
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    return 0;
}