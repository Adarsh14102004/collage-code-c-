#include<iostream>
using namespace std;
int fibbo(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    // recursion
    return fibbo(n-1) + fibbo(n-2);
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        cout<<fibbo(i)<<" ";    
    }
    
    return 0;
}