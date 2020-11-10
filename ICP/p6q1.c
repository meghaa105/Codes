#include<stdio.h>
void main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {   l=i;
        for(j=1;j<=i;j++,l--)
        {
            printf("%d",l);
        }printf("\n");
    }
}
