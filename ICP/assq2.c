#include<stdio.h>
int main()
{
    // Write a C Program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100. The program should also count and display the number of such values.
    int i,j,sum=0,flag=0;
    for(i=0;i<=100;i++)
    {
        if(i%6==0&&i%4!=0)
        {
            sum=sum+i;
            flag=flag+1;
        }
    }
printf("The sum is %d\n",sum);
printf("The number of such numbers are %d",flag);
return 0;
}
