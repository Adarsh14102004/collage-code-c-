#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int p = 1;

    while(n)
    {
        int d = n % 10;

        if(d >= 5)
            d = 9 - d;

        ans += d * p;
        p *= 10;
        n /= 10;
    }

    
    int t = ans;
    while(t >= 10)
        t /= 10;

    if(t == 0)
        ans += 9 * p / 10;

    cout << ans;
}
