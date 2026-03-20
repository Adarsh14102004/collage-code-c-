//Playing with Good String
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int maxLen = 0, curr = 0;
    
    for(char c : s) {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            curr++;
            maxLen = max(maxLen, curr);
        } else {
            curr = 0;
        }
    }
    
    cout << maxLen;
    return 0;
}