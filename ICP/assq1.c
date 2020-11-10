#include<stdio.h>
int k=0;
int sum();
int main()
{
    int a,b,c,i,j,l=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    j=a;

    while(j!=0)
    {
        b=j%10;
        k=k+b;
        j=j/10;
    }
    if(k/10==0)
        printf("%d",k);
    while(sum())
    {   j=k;
        k=0;
        while(j!=0)
    {
        b=j%10;
        k=k+b;
        j=j/10;
    } printf("%d",k);
    }
return 0;
}
int sum()
{if(k/10==0)
return 0;
else
{return 1;}
}
