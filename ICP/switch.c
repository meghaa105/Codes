#include<stdio.h>
int a,b;
void main()
{
    int c,d;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Press 1 for sum\nPress 2 for product\nPress 3 for hcf\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            int sum=a+b;
            printf("%d",sum);
            break;
        }
           case 2:
        {
            int sum=a*b;
            printf("%d",sum);
            break;
        }
          case 3:
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
        break;
    }
    default:{printf("INVALID COMMAND.");
    }
}}
