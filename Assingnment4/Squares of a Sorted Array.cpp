//Squares of a Sorted Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10000], res[10000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = n - 1, pos = n - 1;

    while (left <= right) {
        int l = arr[left] * arr[left];
        int r = arr[right] * arr[right];

        if (l > r) {
            res[pos] = l;
            left++;
        } else {
            res[pos] = r;
            right--;
        }
        pos--;
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << " ";

    return 0;
}