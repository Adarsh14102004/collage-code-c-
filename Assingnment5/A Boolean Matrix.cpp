//A Boolean Matrix
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    
    int a[1000][1000];
    int row[1000]={0}, col[1000]={0};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1 || col[j]==1) cout<<1<<" ";
            else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}