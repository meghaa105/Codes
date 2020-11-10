//Write a program to copy the contents of one array into another in the reverse order.
#include<stdio.h>
int size;
int temp;
void main()
{
    int i,j;
    int arr[size];
    int copy[size];
    printf("Enter the size of the array\n");
    scanf("%d",&size);

    printf("Enter the elements of array\n");

      for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {   temp=size-i-1;
        copy[i]=arr[size-i-1];

     //  printf("%d",copy[j]);

    }

       for(i=0;i<size;i++)
    {
        printf("%d\n",copy[i]);
    }
}
