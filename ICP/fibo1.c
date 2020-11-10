#include<stdio.h>
int fibo(int);
void main()
{
    int a,b,c,d;
    printf("Enter the number of terms\n");
    scanf("%d",&d);
   c=fibo(d);
printf("Sum of the terms is %d",c);
}

int fibo(int n)
{
       if(n==1)
        return 1;
       if(n==0)
        return 0;
       else
        return fibo(n-1)+fibo(n-2);
}
