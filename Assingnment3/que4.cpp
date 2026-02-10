//simple input 
#include <iostream>
using namespace std;

int main() {
    int x;
    int sum = 0;

    while (cin >> x) {
        sum += x;
        if (sum < 0)
            break;
        cout << x << endl;
    }

    return 0;
}
