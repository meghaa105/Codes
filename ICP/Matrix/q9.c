#include<stdio.h>
int size;
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
    modify(arr);
      for(i=0;i<size;i++)
     {
        printf("%d \n",arr[i]);
     }
}
void modify(int a[])
{ int i;
   for(i=0;i<size;i++)
    {
        a[i]=a[i]*3;
    }

}
