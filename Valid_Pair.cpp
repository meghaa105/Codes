#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3 ;
    if( s1 == s2 || s2 == s3 || s3 == s1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}