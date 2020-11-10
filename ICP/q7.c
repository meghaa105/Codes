#include<stdio.h>
void main()
{   int j,num,count=0,remainder;
    printf("Enter a number\n");
    scanf("%d",&num);
    j=num;

    while(j>=1)
       {
           remainder=j%10;
           j=j/10;
          if(remainder==1)
          {
              count++;
              break;
          }
          else
           {count++;}
       }
   printf(" The position of 1 is %d",count);
}
