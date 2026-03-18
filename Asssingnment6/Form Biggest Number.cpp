//Form Biggest Number
#include <bits/stdc++.h>
using namespace std;

// custom comparator
bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), compare);

        // handle case like 0 0 0
        if (arr[0] == "0") {
            cout << "0" << endl;
            continue;
        }

        string result = "";
        for (auto s : arr) {
            result += s;
        }

        cout << result << endl;
    }

    return 0;
}