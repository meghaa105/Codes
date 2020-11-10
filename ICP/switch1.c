#include<stdio.h>
int a,b;
void main()
{
    int c,d;


    while(c!=4)
     {printf("Press 1 for sum\nPress 2 for product\nPress 3 for hcf\nPress 4 for exit\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        { printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
            int sum=a+b;
            printf("%d",sum);
            break;
        }
           case 2:
        { printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
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

    case 4:{printf("INVALID COMMAND.");
    }

}}}
