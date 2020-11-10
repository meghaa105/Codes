//Write a program to insert a number in an array that is already sorted in ascending order.
#include<stdio.h>
int size;
int temp;
void main()
{
    int i,j,num;
    int arr[size];
    int new[size+1];
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the number to insert of the array\n");
    scanf("%d",&num);

    printf("Enter the elements of array\n");

      for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }


   // for(j=0;j<size;j++)
      i=0;
      while(arr[i]<num)
        {
            new[i]=arr[i];
            i++;
        }
        new[i]=num;
        i++;
      for(i=i;i<=size;i++)
     {
         new[i]=arr[i-1];
     }
         for(i=0;i<=size;i++)
    {
        printf("%d\n",new[i]);
    }
}


