//Can You Read This?
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (i > 0 && isupper(s[i])) {
            cout << endl;
        }
        cout << s[i];
    }

    return 0;
}