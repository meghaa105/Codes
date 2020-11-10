#include<stdio.h>
void main()
{
     int i,j,l;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++,l--)
        {   l=(i+j)%2;
            printf("%d",l==0);
        }printf("\n");
    }
}
