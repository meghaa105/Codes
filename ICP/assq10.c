#include<stdio.h>
#include<math.h>
int prime(int);
int flag;
int main()
{
    int n,base=0,pwr,condition;
    printf("Enter a number \n");
    scanf("%d",&n);

for(pwr=2;base<n;pwr++)
    {
        base=pow(2,pwr)-1;
    //    printf("Value of J = %d\n",j);
        if(base>n)
        {
            break;
        }

          int condition=prime(base);


            if(condition==1)
            {printf("Mersenne Prime number is %d\n",base);}
            condition=0;
    }
}
int prime(int nmbr)
{  int factor;
    for(factor=2;factor<=nmbr-1;factor++)
        {
      //     printf("value of K = %d for j=%d\n",k,x);
            if(nmbr%factor==0)
               {
                  flag=0;
                  break;
               }
            else
                {flag=1;}
        }
 return flag;
}
