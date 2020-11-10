#include<stdio.h>
int flag;
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
void main()
{
    int number,i;
    printf("Enter a number\n");
    scanf("%d",&number);

   for(i=2;i<=number;i++)
   { //  int c=3%2;
     //if(3%2!=0)
       // printf("It works\n");

       int result=prime(i);
    if(result==1)
        printf(" %d Prime number\n",i);
           }
}
