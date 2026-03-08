//Next Permutation
#include <iostream>
#include <algorithm>
using namespace std;
// main function
int main() {
    int n;
    cin >> n;

    int arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1])
        i--;

    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i])
            j--;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    reverse(arr + i + 1, arr + n);

    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";

    return 0;
}