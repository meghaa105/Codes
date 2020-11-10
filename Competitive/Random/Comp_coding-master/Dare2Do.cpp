#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 

int toDec(long long n,int base)
{   if(n==0)
    {return 0;}
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(base,i);
        ++i;
    }
    return decimalNumber;
}

long long toBase(int n,int base)
{   if(n==0)
    {return 0;}

    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%base;
        n /= base;
        binaryNumber += remainder*i;
        i *= 10;
    }
    
    return binaryNumber;
}

int main() {
    int n; // Number of test cases
    cin >> n;
    long long arr[3];
    int i,j,base;

    long long num1,num2,ans;
    for(i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
        cin>>arr[j];
        }
        base = arr[0];
        num1 = arr[1];
        num2 = arr[2];
   
        num1 = toDec(num1,base); 
        num2 = toDec(num2,base);

       if(num2==0)
        {
            ans = 0;
        }
        else
        {ans = toBase(num1%num2,base);}

        cout << ans << "\n";      
    
    }    
    return 0;
}
