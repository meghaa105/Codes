#include<stdio.h>
void main()
{
    int i,r=0,c=0,t,s=1,n,b=1;
    printf("Enter a number\n");
    scanf("%d",&n);t=n;
    while(n>0)
    {
          r=n%10;
          c=c+(r*r*r);
          printf("%d\n",c);
          n=n/10;
    }
    printf("%d\n",c);
    if(c==t)
    printf(" Armstrong number\n");
    if(c!=t)
    printf("Not a Armstrong number\n");


}
