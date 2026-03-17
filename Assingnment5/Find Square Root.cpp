//Find Square Root
#include <iostream>
using namespace std;

int main(){
    long long x;
    cin>>x;

    if(x==0){
        cout<<0;
        return 0;
    }

    long long low=1, high=x, ans=0;

    while(low<=high){
        long long mid = low + (high - low)/2;

        if(mid <= x/mid){
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout<<ans;
}