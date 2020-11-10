#include<stdio.h>
#include<string.h>
int max_str_size=150;
void main()
{ char arr[max_str_size];
  char name1[max_str_size];
  printf("Enter the string\n");
  gets(arr);
  // printf("Enter the string1\n");
  //gets(name1);

  int i,j;
    while(arr[i]!=0)
    {
        while(arr[j]!=0)
         if(arr[j]>arr[j+1])
         {  int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

         }
    }

    while(arr[i]!=0)
    {
        printf("%d\n",arr[i]);
    }
}
