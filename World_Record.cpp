#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float k1,k2,k3,ch = 9.58,ch1,v;
        cin >> k1;
        cin >> k2;
        cin >> k3;
        cin >> v;
        ch1 = (k1*k2*k3*v);
        ch1 = 100/ch1;
        ch1 = int((ch1*100 + 0.5));
        ch1 = ch1/100;
        if(ch > ch1)
        {
            cout << "YES" << endl; 
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}