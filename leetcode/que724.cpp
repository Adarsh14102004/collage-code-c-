//find pivot index
#include<iostream>
using namespace std;
int main() {
   int n;
    cin>>n;
    int total=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    int leftSum=0;
    for (int i = 0; i < n; i++)
    {
        if(leftSum == total-leftSum-arr[i])
        {
            cout<<i;
            return 0;
        }
        leftSum+=arr[i];
    }
    return -1;
}