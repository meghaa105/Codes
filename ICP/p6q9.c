#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {   l=i;
        for(j=1;j<=i;j++,l--)
         { printf("%d",l);
         }
         for (j=2;j<=(i);j++,l++)
         {printf("%d",l+2);}
         printf("\n");
    }
}

