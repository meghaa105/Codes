#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,temp;
    cin >> num;
    map<int, int> votes;
    int v ;
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
                v = temp;
                max = it->second;
            }
        }
        else
        {
            votes.insert({ temp, 1 });
            if(votes[temp]>max)
            {
                v = temp;
                max = votes[temp];
            }
        }      
    }
    cout << v << endl;
}