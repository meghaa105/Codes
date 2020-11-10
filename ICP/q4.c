#include<stdio.h>
int binary(int);
int convert(int);
void main()
{
  int i,n,j,k,sum=0;

  printf("Enter a number\n");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
      j=binary(i);
      k=convert(j);
      sum=sum+k;
  }

  printf("The sum is %d\n",k);
}

int binary(int num)
{
    int i,binryn=1,dig=0;


    while(num!=0)
    {   dig=num%2;
        num=num/2;
        binryn=binryn+dig;
    }
    return binryn;
}

int convert(int j)
{   int sum=j%10;
    while(j!=0)
    {
        j=j/10;
        sum=sum+j;
    }
    return sum;
}


