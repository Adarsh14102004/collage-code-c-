#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int bn = 0;
    while (n>0)
    {
        int m = n%2;
        bn= bn*10+m;
        n=n/2;
    }
    cout<<bn<<endl;
    
    
    return 0;
}