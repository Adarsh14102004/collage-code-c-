#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N >= 300 && N <= 460) {
        cout << "Macbook";
    }
    else if (N >= 200 && N <= 280) {
        cout << "Kurkura";
    }
    else if (N >= 1100 && N <= 1500) {
        cout << "Cycle";
    }
    else if (N >= 50 && N <= 80) {
        cout << "Bike";
    }
    else {
        cout << "Better Luck Next Time ";
    }

    return 0;
}
