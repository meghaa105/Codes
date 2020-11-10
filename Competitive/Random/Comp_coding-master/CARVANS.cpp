//https://www.codechef.com/LRNDSA01/problems/CARVANS
#include <bits/stdc++.h>
using namespace std;

int car;

int main() 
{
    int i,j,k,num;
    int count = 1;
	// your code goes here
	cin >> num;
	for(i = 0 ;i < num; i++)
	{
	    count = 1;
	    cin >> car;
	    int speed[car];
	    for(j = 0; j < car; j++)
	    {
	        cin >> speed[j];
	    }
	    for(k=0;k<car-1;k++)
	    {
	        if(speed[k+1]<=speed[k])
	        {
	            count++;
	        }
	        else
	        {
	            speed[k+1] = speed[k];
	        }
	    }
	    cout << count << "\n";
	}
	
	
	return 0;
}
