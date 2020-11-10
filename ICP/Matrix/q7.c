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
temp=arr[0];

for(i=0;i<size-1;i++)
{
    arr[i]=arr[i+1];
}
arr[i]=temp;

  for(i=0;i<size;i++)
     {
        printf("%d \n",arr[i]);
     }
}
