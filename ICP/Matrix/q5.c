//Read in 20 numbers each of which is between 10 and 100, inclusive. As each number is read, print it only if it is not a duplicate of a number already read. Use the smallest possible array to solve this problem
#include<stdio.h>
int size=20;
int flag=0;
void main()
{
    int i,j,k=0;
    int arr[size];
    int new[size];
 //   printf("Enter the size of the array\n");
 //   scanf("%d",&size);

    printf("Enter the elements of array between 10 and 100\n");


    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++)
    {

        if(arr[i]==arr[j])
        {
            flag=0;
        }
        if(arr[i]!=arr[j])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        new[k]=arr[i];
        k++;
    }


    }  printf("%d\n",k);
       printf("The resultant array is \n");
         for(i=0;i<k;i++)
     {
        printf("%d \n",new[i]);
     }
}
