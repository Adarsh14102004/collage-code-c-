#include<iostream>
using namespace std;
int fibo(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    // recursion
    return fibo(n-1) + fibo(n-2);
}int main() {
    int n;
    cin >> n;
    int g = 0;
    for (int i = 0; i <=n; i++) {
        for (int j = 1; j <= i; j++)
        {
            cout<<fibo(g)<<" ";
            g++;
        }
        cout<<endl;
        
    }
    return 0;
    
    
}