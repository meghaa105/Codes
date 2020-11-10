#include<stdio.h>
int fibo(int);
void main()
{
    int a,b,c=0,d;
    printf("Enter the number of terms\n");
    scanf("%d",&d);
    printf("The fibonacci series is\n");
 for(a=1;a<=d;a++)
 {
     printf("%d\n",fibo(c));
     c++;
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
