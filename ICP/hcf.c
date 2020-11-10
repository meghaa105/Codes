#include<stdio.h>
void main()
{
    int a,b,c,d,t;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
printf("%d",a);
}

