#include<stdio.h>2
int i=1;
int prime(int,int);
void main()
{
    int a,b,c,d;
    printf("Enter a number\n");
    scanf("%d",&a);
    c=prime(a,i);
    if(c==0)
        printf("Not Prime\n");
    else
        printf("Prime\n");
}

int prime(int n,int i)
{   while(i<=n-1)
   {if(n%i==0)
    { return 0;}
    else
    {return(n,++i);}

   }
}
