#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    //size
    cout<<a.size()<<endl;
    //capacity
    cout<<a.capacity()<<endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    //first element
    cout<<a.front()<<endl;
    //last element
    cout<<a.back()<<endl;
    // insertion begin
    a.insert(a.begin()+2,7);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    //insertion last
    a.insert(a.end()-2,8);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    // reverse
    reverse(a.begin(),a.end());
    //sort
    sort(a.begin(),a.end());
    cout<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}
