#include<stdio.h>
int  size=100;
void main()
{
     int i,j;
     int arr[size];
  //   arr[2]=24;

   //  printf("%d",arr[2]);



     for(i=0;i<size;i++)
     {
         arr[i]=i+1;
     }

          for(i=1;i<size;i++)
     {    if(arr[i]!=0)
     {        for(j=i+1;j<size;j++)
          {
              if(arr[j]%arr[i]==0)
              {
                  arr[j]=0;
              }

     }

     }
     }
//printf("2\n");
     for(i=1;i<size;i++)
     {
         if(arr[i]!=0)
         {
             printf("%d \n",arr[i]);
         }

     }

}
