//Twenty-Five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many are odd.

#include<stdio.h>
void main()
{
    int i,pos=0,neg=0,eve=0,odd=0;
    int arr[25];

    printf("Enter the values for the array\n");


    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<25;i++)
    {
        if(arr[i]%2==0)
          {
             eve++;
          }
        if(arr[i]%2!=0)
             {
             odd++;
          }
        if(arr[i]>0)
            {
             pos++;
          }
        if(arr[i]<=0)
          {
             neg++;
          }
    }

    printf(" Positive %d \n Negative %d \n Odd %d \n Even %d \n",pos,neg,odd,eve);
}
