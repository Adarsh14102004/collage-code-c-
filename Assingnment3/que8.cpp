// //bosten number problem
// #include<iostream>
// using namespace std;
// int digitsum(int n) {
//     int sum = 0;
//     while (n != 0) {
//         int k= n % 10;
//         sum+=k;
//         n = n / 10;
//     }
//     return sum;
// }
// bool prime(int n){
//     for (int i = 2; i <=n; i++)
//     {
//         if (n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin>>n;
//     int sum=0;
//     int factors=0;
//     for (int i = 2; i <=n; i++)
//     {
//        while (n%i==0)
//        {
//         factors+=digitsum(i);
//        }
//        n=n/i;
       
        
//     }
//     cout<<sum<<endl;
//     cout<<factors<<endl;
//     if (sum = factors)
//     {
//         cout<<"Bosten number";
//     }
//     else
//     {
//         cout<<"Not a Bosten number";
//     }
    
    
//     return 0;
// }

#include <iostream>
using namespace std;

int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    if (isPrime(n)) {
        cout << 0;
        return 0;
    }

    long long temp = n;
    int sumDigits = digitSum(n);
    int sumFactors = 0;

    for (long long i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            sumFactors += digitSum(i);
            temp /= i;
        }
    }

    if (temp > 1)
        sumFactors += digitSum(temp);

    if (sumDigits == sumFactors)
        cout << 1;
    else
        cout << 0;

    return 0;
}
