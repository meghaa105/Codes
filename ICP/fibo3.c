#include<stdio.h>
int fibo(int);
void main()
{
    int a,b=0,c=0,d;
    printf("Enter the number\n");
    scanf("%d",&d);
    printf("The fibonacci series is\n");
while(b<=d)

 {  c++;
    printf("%d\n",b);
    b=fibo(c);

 }
}
int fibo(int n)
{
       if(n==1)
        return 1;
       if(n==0)
        {return 0;}
       else
         return fibo(n-1)+fibo(n-2);
}
