// chewbacca an integer number
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s=to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='5')
        {
            s[i]='9'-s[i]+'0';
        }
        
    }
    if (s[0]=='0')
    {
        s[0]='9';
    }
    
    cout<<s;
    
    return 0;
}
