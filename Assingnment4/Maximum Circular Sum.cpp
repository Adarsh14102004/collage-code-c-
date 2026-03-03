//Maximum Circular Sum
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[1000];
        int totalSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            totalSum += arr[i];
        }

        int currMax = arr[0], maxSum = arr[0];
        int currMin = arr[0], minSum = arr[0];

        for (int i = 1; i < n; i++) {

            if (currMax + arr[i] > arr[i])
                currMax = currMax + arr[i];
            else
                currMax = arr[i];

            if (currMax > maxSum)
                maxSum = currMax;

            if (currMin + arr[i] < arr[i])
                currMin = currMin + arr[i];
            else
                currMin = arr[i];

            if (currMin < minSum)
                minSum = currMin;
        }

        if (maxSum < 0)
            cout << maxSum << endl;
        else {
            int circularMax = totalSum - minSum;
            if (circularMax > maxSum)
                cout << circularMax << endl;
            else
                cout << maxSum << endl;
        }
    }

    return 0;
}
