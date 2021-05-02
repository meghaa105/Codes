#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,stu,prob,full,part;
    cin >> n;
    while(n--)
    {
        cin >> stu >> prob;
        cin >> full >> part;
        string sol;
        while(stu--)
        {
            long long int x = 0,y = 0;
            cin >> sol;
            for(int i=0;i<sol.size();i++)
            {
                if(sol.at(i)=='P')
                {
                    y++;
                }
                if(sol.at(i)=='F')
                {
                    x++;
                }
            }
            if(x >= full)
            {
                cout << 1;
            }
            else if( x>= (full - 1) && y >=part)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}