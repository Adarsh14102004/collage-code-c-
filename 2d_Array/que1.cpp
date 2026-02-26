//wave printing of a 2d array

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }   
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
       
        }
        cout << endl;
    }
    for (int j = 0; j < c; j++)
    {
        if (j%2==0)
        {
            for (int i = 0; i < r; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int i = r-1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
        
        
    }
    
    

    

    return 0;
}