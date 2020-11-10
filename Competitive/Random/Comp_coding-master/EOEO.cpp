#include <bits/stdc++.h>
using namespace std;

https://www.codechef.com/JUNE20B/problems/EOEO

int main()
{   
    long long int t,ts;
    int power;
    cin >> t;
    // your code goes here
    while(t--)
    {
        cin >> ts;
        if(ts%2!=0)
        {
            cout << ts / 2 << endl;
        }
        else 
        {
            power = (ts & (~(ts - 1)));
            power = power *2;
            cout << ts/power << endl;
        }
    }
    
    return 0;

}
