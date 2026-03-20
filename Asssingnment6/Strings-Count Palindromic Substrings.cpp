//Strings-Count Palindromic Substrings
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.size();
    int count = 0;
    
    for(int center = 0; center < n; center++) {
        int l = center, r = center;
        while(l >= 0 && r < n && s[l] == s[r]) {
            count++;
            l--; r++;
        }
        
        l = center; r = center + 1;
        while(l >= 0 && r < n && s[l] == s[r]) {
            count++;
            l--; r++;
        }
    }
    
    cout << count;
    return 0;
}