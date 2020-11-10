#include <bits/stdc++.h>
using namespace std;

void reverse_extra()
{
    cout << "O(n) extra space" << endl;
    int size;
    cin >> size;
    int temp;
    vector<int> v;
    while(size--)
    {
        cout<< "Enter the number";
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> a;
    for(int i = v.size()-1;i>=0;i--)
    {
        a.push_back(v[i]);
    }
    for(int i = 0;i<v.size();i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void stack_reverse()
{
    cout << "Stack only O(n) " << endl;
    int size;
    cin >> size;
    int temp;
    stack<int> v;
    while(size--)
    {
        cout<< "Enter the number";
        cin >> temp;
        v.push(temp);
    }
    
    while(!v.empty())
    {
        cout << v.top();
        v.pop();
    }
    cout << endl;
}
int main()
{
    cout << "hello" << endl;
    reverse_extra();
    stack_reverse();
    return 0;

}