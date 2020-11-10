#include<stdio.h>
int size;
int temp;
void modify(int[]);
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

    for(i=0;i<size;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;

    }

        for(i=0;i<size;i++)
     {
        printf("%d \n",arr[i]);
     }
}
