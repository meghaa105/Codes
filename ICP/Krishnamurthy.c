#include<stdio.h>
void main()
{
    int i,r=0,c=0,t,s=1,n,b=1;
    printf("Enter a number\n");
    scanf("%d",&n);t=n;
    while(n>0)
    {
          r=n%10;
         int  m=1;
int j,k;
          for(k=r;k>=1;k--)
          { m=m*k;}
          c=c+m;
          printf("%d\n",c);
          n=n/10;
    }
    printf("%d\n",c);
        if(c==t)
    printf("It is a Krishnamurthy number\n");
    if(c!=t)
    printf("Not a Krishnamurthy number\n");


}
