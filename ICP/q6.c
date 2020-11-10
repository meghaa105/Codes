// Write a C Program to output the number of consecutive trailing zeros in the factorial of a number?
#include<stdio.h>
void main()
{ int num,j,i,count=0,remainder,product=1;
  long long int factorial=1;
  printf("Enter a number\n");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
  {
      factorial=factorial*i;


  }
  printf("The factorial of the number is %d\n",factorial);
    j=factorial;
  while(j>=1)
       {
           remainder=j%10;
           if(remainder==0)
           {
               count++;
           }
           if(remainder!=0)
            break;

           j=j/10;
          product=product*remainder;
       }
 printf("The number of trailing zeros is %d",count);



}
