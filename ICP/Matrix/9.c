//Write a program which performs the following tasks:
// Initialize an integer array of 10 elements in main()
//Pass the entire array to a function modify()
//In modify() multiply each element of array by 3
//Return the control to main() and print the new array elements in main()


#include<stdio.h>
void modify(int[]);
void main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    modify(arr);

    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void modify(int a[])
{   int i;
    for(i=0;i<10;i++)
    {
        a[i]=3*a[i];
    }
}
