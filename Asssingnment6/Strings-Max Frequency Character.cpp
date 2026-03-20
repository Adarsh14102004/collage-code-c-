//Strings-Max Frequency Character
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    unordered_map<char, int> freq;
    
    for(char c : s) {
        freq[c]++;
    }
    
    char ans;
    int maxFreq = 0;
    
    for(auto &p : freq) {
        if(p.second > maxFreq) {
            maxFreq = p.second;
            ans = p.first;
        }
    }
    
    cout << ans;
    return 0;
}