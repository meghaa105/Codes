#include <stdio.h>
int prime (int, int);
void main()
{
int n,i,k;
printf("Enter a number\n");
scanf("%d",&n);
for (i=2; i<n; i++)
  {

       if(prime(i,i/2)==1 && prime(n-i,(n-i)/2)==1)
       printf("%d = %d + %d\n",n,i,n-i);

  }
}


int prime (int a, int b)
{
if (a==2||b==1)
return 1;
else
  {
    if(a%b==0)
    return 0;
    else
    return prime(a,b-1);

  }
}
