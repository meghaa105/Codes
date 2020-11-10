#include<stdio.h>
int size;
int sum=0;
void main()
{   printf("Enter the size\n");
   scanf("%d",&size);

    int ran[size][size];
   int i,j,m=3,n=3;


   printf("Enter array\n");
   for(i=0;i<size;i++)
     {for(j=0;j<size;j++)
      {scanf("%d",&ran[i][j]);}}
  //         for(int i=0;i<n;i++)
 //   {
 //       for(int j=0;j<m;j++)

 //   }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        printf("%d ",ran[i][j]);
        printf("\n");
    }




   for(i=0;i<=size-2;i++)
   { for(j=0;j<size-i-1;j++)
      {sum=sum+ran[i][j];}}

 printf("%d",sum);
}

