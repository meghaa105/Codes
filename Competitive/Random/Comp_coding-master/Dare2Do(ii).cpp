#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long x,y;
long a,b,c;

vector<long long int> g1;

void eval(int query,int lim1,int lim2)
{
    if(g1.empty())
        for(int i=0;i<lim2-1;i++)
            g1.push_back(0);
    switch(query)
    {
        case 0 : {
                    int sum=0;
                    for(int i=lim1-1;i<lim2;i++)
                        sum+=g1[i];
                    cout<<sum<<"\n";
                    break;
                 }
        case 1 : {
                    int p=1;
                    for(int i=lim1-1;i<lim2;i++)
                    {
                        int prod = p*(p+1)*(p+2);
                        p++;
                        g1[i]+=prod;
                    }
                    break;
                 }    
        case 2 : {
                    int p=1;
                    for(int i=lim1-1;i<lim2;i++)
                    {
                        int prod = p*(p+1)*(p+2);
                        p++;
                        g1[i]-=prod;
                    }
                    break;
                 } 
    }
}

int main()
{
    
    cin>>x>>y;
    int fl=y;
    while(fl>0)
    {
        cin>>a>>b>>c;
        eval(a,b,c);
        fl--;
    }

    return 0;
}
