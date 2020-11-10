//Write a C Program to Put Even & Odd Elements of an Array in 2 Separate Arrays.
#include<stdio.h>
int size;
int temp;
void main()
{
    int i,j,k=0,l=0;
    int arr[size];
    int even[size];
    int odd[size];
    printf("Enter the size of the array\n");
    scanf("%d",&size);

    printf("Enter the elements of array\n");
          for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

 for(i=0;i<size;i++)
    {if(arr[i]%2==0)
    {even[k]=arr[i];

             k++;}
        if(arr[i]%2!=0)
     {odd[l]=arr[i];
             l++;}
    }

printf("new\n");
   for(i=0;i<k;i++)
     {
        printf("%d \n",even[i]);
     }
printf("new\n");
   for(i=0;i<l;i++)
     {
        printf("%d \n",odd[i]);
     }
}
