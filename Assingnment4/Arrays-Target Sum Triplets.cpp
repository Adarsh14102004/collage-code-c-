// Arrays-Target Sum Triplets
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[1000];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    sort(arr, arr + N);

    for (int i = 0; i < N - 2; i++) {

        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = N - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << arr[i] << ", " << arr[left] 
                     << " and " << arr[right] << endl;

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

    return 0;
}
