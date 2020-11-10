#include<stdio.h>
void main()
{
    int a,b,i,j,k;
    for(i=1;i<=99;i++)
    {   b=i%10;
        k=i/10;
        if(i==3*(b+k))
        {
            printf("%d\n",i);
        }
    }
}
