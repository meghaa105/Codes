//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include <bits/stdc++.h>
using namespace std;



void findTrailingZeros(long long int n) 
{ 
    // Initialize result 
    int count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (int i = 5; n / i >= 1; i *= 5) 
     {
         count += n / i;
     }
  
    cout << count << "\n";
} 

int main()
{   
    int num;
    long long int number;
    long long int zeros;
	// your code goes here
    cin >> num; 
    for(int i = 0 ;i<num;i++)
    {
        cin >> number;
        findTrailingZeros(number);
        
    }
    return 0;

}
