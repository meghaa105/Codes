#include<stdio.h>
void main()
{
     int i,j,l=0;
    for(i=1;i<=9;i++,l++)
    {    if(i<5)
        {for(j=1;j<=i;j++)
        {printf("*");}}
         if(i>=5)
       {for(j=i-(2*l);j>=1,l<4;)
        {printf("*");}
       }
        printf("\n");
    }
}
