#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int g= 0;
    int sum=0;
    while (n>0)
    {
        int kit=n%10;
        sum+=kit*pow(2,g);
        g++;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}