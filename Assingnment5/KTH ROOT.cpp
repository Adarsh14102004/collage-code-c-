//KTH ROOT
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        long long ans=1;

        for(long long i=1;i<=1000000;i++){
            long long p=1;
            for(long long j=0;j<k;j++){
                if(p>n/i){
                    p=n+1;
                    break;
                }
                p*=i;
            }
            if(p<=n) ans=i;
            else break;
        }

        cout<<ans<<endl;
    }
}