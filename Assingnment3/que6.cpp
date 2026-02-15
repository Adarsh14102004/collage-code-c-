//conversion faranite to celcius
#include <iostream>
using namespace std;

int main() {
    int min, max, step;
    cin >> min;
    cin >> max;
    cin >> step;

    for (int i = min; i <= max; i += step) {
        int C = (5 * (i - 32)) / 9;
        cout << i << " " << C << endl;
    }

    return 0;
}
