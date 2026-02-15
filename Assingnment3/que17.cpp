#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int x;
        cin >> x;
        int even = 0, odd = 0;
        if (x == 0) even = 0;
        while (x > 0) {
            int d = x % 10;
            if (d % 2 == 0) even += d;
            else odd += d;
            x /= 10;
        }
        if (even % 4 == 0 || odd % 3 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
