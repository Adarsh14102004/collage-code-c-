//Arrays-Reverse an Array
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int i = 0, j = N - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int k = 0; k < N; k++)
        cout << arr[k] << endl;

    return 0;
}