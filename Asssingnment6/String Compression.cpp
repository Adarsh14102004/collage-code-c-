//String Compression
#include <bits/stdc++.h>
using namespace std;

string compressString(string s) {
    string result = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        char current = s[i];
        int count = 1;

        // count same consecutive characters
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        result += current;
        result += to_string(count);
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << compressString(s);

    return 0;
}