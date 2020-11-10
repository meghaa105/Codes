#include <bits/stdc++.h>
using namespace std;

void main()
{
    cout << "Welcome" << endl;
    int size;
    cin >> size;
    int temp;
    vector<int> v;
    while(size--)
    {
        cout<< "Enter the number ";
        cin >> temp;
        v.push_back(temp);
    }
    return 0;
}