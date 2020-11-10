#include<stdio.h>
int size;
int temp;
void main()
{
    int i,j;
    int arr[size];
 //   int copy[size];
    printf("Enter the size of the array\n");
    scanf("%d",&size);

    printf("Enter the elements of array\n");

      for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
         if(arr[j]>arr[j+1])
         {  int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

         }
    }

    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
