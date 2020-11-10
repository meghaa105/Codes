#include<stdio.h>
#include<math.h>
void main()
{   int a,chick,i,sum=0,total;
    printf("Enter the day on which the number of chicken is to be known\n");
    scanf("%d",&a);
    chick=pow(3,a-1);
    if(a>=6)
    {
        for(i=6;i<=a;i++)
            sum=sum+pow(3,i-6);
    }
    total=chick-sum;
    printf("The total number of chickens are %d\n",total);
}

