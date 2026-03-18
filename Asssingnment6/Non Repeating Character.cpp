//Non Repeating Character
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        char ans = '-';
        bool found = false;

        for (char ch : s) {
            if (freq[ch] == 1) {
                ans = ch;
                found = true;
                break;
            }
        }

        if (found) cout << ans << endl;
        else cout << -1 << endl;
    }

    return 0;
}