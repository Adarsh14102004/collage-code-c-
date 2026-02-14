// conversion any to any
#include <iostream>
using namespace std;

int toDecimal(int n, int sb) {
    int p = 1;
    int dec = 0;
    while (n > 0) {
        int d = n % 10;
        dec += d * p;
        p *= sb;
        n /= 10;
    }
    return dec;
}

int fromDecimal(int n, int db) {
    int p = 1;
    int res = 0;
    while (n > 0) {
        int d = n % db;
        res += d * p;
        p *= 10;
        n /= db;
    }
    return res;
}

int convertBase(int sb, int db, int sn) {
    int dec = toDecimal(sn, sb);
    return fromDecimal(dec, db);
}

int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;
    cout << convertBase(sb, db, sn);
    return 0;
}
