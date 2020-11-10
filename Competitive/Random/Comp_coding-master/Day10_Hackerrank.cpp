// Given a base- integer, n, convert it to binary (base-2). Then find and print the base-n integer denoting the maximum number of consecutive 1's in n's binary representation.
//This isn't the correct solution

#include <bits/stdc++.h>

using namespace std;
int binaryNum[8]; 
int count_f=0;

int recursive(int k,int count)
{   
    count_f =count;
   
    if(binaryNum[k]==1)
    {
        count_f++;
        recursive(k+1,count+1);
    }
    if(binaryNum[k]==0)
    {
        return k;
    }
    return 7;
}

int main()
{   count_f=0;
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int i = 0; 
    while (n > 0) 
    { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    int check=0;
    int arr[8]={0,0,0,0,0,0,0,0};

    int l=0;
    while(check!=7)
    {   
        if(l<8)
        {
        check = recursive(0,0);
        arr[l] = count_f;
        l++;
        }
       
    }

    int t = sizeof(arr) / sizeof(arr[0]); 
    
    cout  << *max_element(arr, arr + t); 

    return 0;
}
