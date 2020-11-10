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
    for(i=1;i<size;i++)
    { int value=arr[i];
      int hole=i;
       while(hole>0&&arr[hole-1]>value)
        { arr[hole]=arr[hole-1];
          hole--;
        }
        arr[hole]=value;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

