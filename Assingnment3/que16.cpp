//Shopping Game
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int M, N;
        cin >> M >> N;
        int a = 0, h = 0;
        int turn = 1;
        while (1) {
            if (turn % 2 == 1) {
                a += turn;
                if (a > M) {
                    cout << "Harshit\n";
                    break;
                }
            } else {
                h += turn;
                if (h > N) {
                    cout << "Aayush\n";
                    break;
                }
            }
            turn++;
        }
    }
    return 0;
}
