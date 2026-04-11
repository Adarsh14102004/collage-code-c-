// pascal triangle
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout<<" ";
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                cout << "1 ";
            }
            else
            {
                int num = 1;
                for (int k = 1; k <= j; k++)
                {
                    num = num * (i - k + 1) / k;
                }
                cout << num << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

