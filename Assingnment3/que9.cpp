// Armstrong number 
#include <iostream>
#include <cmath>
using namespace std;


bool isArmstrong(int n) {
    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit; 
        n /= 10;
    }

    return sum == original;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
