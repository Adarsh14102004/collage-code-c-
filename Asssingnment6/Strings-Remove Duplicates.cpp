//Strings-Remove Duplicates
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string result = "";
    result += s[0];
    
    for(int i = 1; i < s.size(); i++) {
        if(s[i] != s[i-1]) {
            result += s[i];
        }
    }
    
    cout << result;
    return 0;
}