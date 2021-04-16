#include<bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int n,hr,min;
    cin >> n;
    while(n--)
    {
        cin >> hr >> min;
        int count_min = countDigit(min);
        int count_hr = countDigit(hr);
        for(int i = 1;i<=9;i++)
        {
            
        }



    }
}

