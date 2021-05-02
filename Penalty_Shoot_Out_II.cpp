#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int size,temp;
        cin >> size;
        size = 2*size;
        string v;
        cin >> v;
        int A = 0;
        int B = 0;
        int t = v.size()/2;
        int flag = 1;
        for(int i = 0;i<v.size();i=i+2)
        {
            if(v[i]=='1')
            {
                A++;
            }
            if(v[i+1]=='1')
            {
                B++;
            }
            if((abs(A-B) >= t--))
            {
                i = 2*i;
                // cout << A << " " << B << " " << t << " " << size <<endl;     
                cout << min(i,size) << endl;
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout << v.size() << endl;
        }
    }
}