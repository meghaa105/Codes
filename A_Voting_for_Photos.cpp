#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,temp;
    cin >> num;
    map<int, int> votes;
    stack<int> v;
    long long int max = INT_MIN;
    while(num--)
    {
        cin >> temp;
        auto itr = votes.begin();
        if(votes.find(temp)!=votes.end())
        {
            auto it = votes.find(temp);
            it->second++;
            if(it->second>max)
            {
                v.push(it->first);
                max = it->second;
            }
        }
        else
        {
            votes.insert({ temp, 1 });
            if(votes[temp]>max)
            {
                v.push(temp);
                max = votes[temp];
            }
        }      
    }
    cout << v.top() << endl;
}