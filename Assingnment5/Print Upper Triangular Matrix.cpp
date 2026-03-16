//Print Upper Triangular Matrix
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100][100];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j) cout<<a[i][j]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}