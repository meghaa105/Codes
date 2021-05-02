#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n,x,y,a,b,z;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> a >> b >> z;
        string c =  ( z <= min(x/a,y/b) ) ? "Yes" : "No";
        cout << c << endl;
    }
}