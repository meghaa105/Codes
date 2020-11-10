#include<stdio.h>
void main()
{
   int arr[25]={};
   int i,odd=0;
   int even=0;
   int neg=0;
   int pos=0;

   for(i=0;i<25;i++)
   {  scanf("%d",&arr[i]);}

      for(i=0;i<25;i++)
   { if(arr[i]>0)
     {pos=pos+1;}
     if(arr[i]<0)
     {neg=neg+1;}
     if(arr[i]%2==0)
     {even=even+1;}
     if(arr[i]%2!=0)
     {odd=odd+1;}

   }

   printf("%d\n%d\n%d\n%d",pos,neg,even,odd);
}
