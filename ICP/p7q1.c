#include<stdio.h>
void main()
{
    int i,j; int sum=0;
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
              sum+=j;
        }
      if(sum==i)
      printf("%d",i);

    }
}
