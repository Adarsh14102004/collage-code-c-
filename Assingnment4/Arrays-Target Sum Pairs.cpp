// Arrays-Target Sum Pairs
#include <iostream>
#include <algorithm>
using namespace std;

void printPairs(int arr[], int n, int target) {
    sort(arr, arr + n);

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;

            while (left < right && arr[left] == arr[left - 1])
                left++;
            while (left < right && arr[right] == arr[right + 1])
                right--;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
}

int main() {
    int N;
    cin >> N;

    int arr[1000];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    printPairs(arr, N, target);

    return 0;
}