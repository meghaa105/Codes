#include<stdio.h>
void main()
{
     int i,j,l;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        { printf(" ");}
        for(j=1;j<=i;j++)
        {if(j%2==0)
        printf("A");
        else
        printf("*");}

        for(j=2;j<=i;j++)
        {l=(i+j)%2;
        if(l==1)
        {printf("A");}
        else
        {printf("*");}}
        printf("\n");
    }
}
