#include <bits/stdc++.h>
using namespace std;

void max_min(vector<int> v,pair<int,int> p)
{
    cout << "Linear time" << endl;
    for(int i = 0; i< v.size();i++)
    {
        if(v[i] > p.second)
        {
            p.second = v[i];
        }
        if(v[i] < p.first)
        {
            p.first = v[i];
        }
    }
    cout << "Max " << p.second << endl;
    cout << "Min " << p.first << endl;
}
int main()
{
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
    pair<int,int> p;
    p.first = INT_MAX;
    p.second = INT_MIN;
    max_min(v,p);
    

}