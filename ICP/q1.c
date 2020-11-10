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
    { int min=i;
        for(j=i+1;j<size;j++)
        {

            if(arr[j]<arr[min])
            {
                temp=arr[j];
                arr[j]=arr[min];
                arr[min]=temp;
            }
        }}
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
