#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n-1; i++) {
        if(n%i == 0) {
            cout << i << " is not a prime number" << endl;
        } else {
            cout << i << " is a prime number" << endl;
        }
    }
    return 0;
}