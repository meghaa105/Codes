//Implement the following procedure to generate prime numbers from 1 to 100 into a program. This procedure is called sieve of Eratosthenes.Step 1 Fill an array num[100] with numbers from 1 to 100.Step 2 Starting with the second entry in the array, set all its multiples to zero.Step 3 Proceed to the next non-zero element and set all its multiples to zero.Step 4 Repeat step 3 till you have set up the multiples of all the non-zero elementso zero.Step 5 At the conclusion of step 4, all the non-zero entries left in the array wouldbe prime numbers, so print out these numbers.//

#include<stdio.h>
int temp=2;
int main()
{
    int temp=2,i;
    int num[100];

    for(i=1;i<=100;i++)
    {
        num[i]=i;
        printf("%d\t",num[i]);
    }

 //while(temp<=100)
 //{if(num[temp]!=0)
  for(i=2;i<=100;i++)
    {
        if(num[i+1]%num[temp]==0)
        {
            num[i]=0;
               printf("%d\n",num[i]);
        }}

//   else
//   {
  //     temp++;
   //}

 //}
    for(i=1;i<=100;i++)
    {   if(num[i]!=0)
        printf("%d\n",num[i]);
    }

    return 0;
}
