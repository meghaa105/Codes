#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int H,x,y,C;
        cin >> H >> x >> y >> C;
        // cout << H << x << y<< C;
        int water;
        water = x +(y/2);
        water = H * water;
        // cout << water << endl;
        if(water <= C)
        {
            cout <<"YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}