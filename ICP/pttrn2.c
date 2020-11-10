#include<stdio.h>
void main()
{   int i,k,j,l;
    for(i=1;i<=5;i++)
    { k=i;l=6;

        for(j=5;j>=i;j--)
        {
            printf("%d",k);
            k++;}
        for(j=2;j<=i;j++)
        {
            printf("%d",l);
         l++;}
        printf("\n");
}}
