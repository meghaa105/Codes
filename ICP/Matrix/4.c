#include<stdio.h>
void main()
{
    int arr[7]={5,7,9,11,13,15};
    int temp,i,num=10;


    for(i=0;i<7;i++)
    {
        if(arr[i]>num)
        {
            temp=i;
            break;
        }
    }

    for(i=6;i>temp;i--)
     {
       arr[i]=arr[i-1];
     }
     arr[temp]=num;
      for(i=0;i<7;i++)
    {
      printf("%d\t",arr[i]);
    }

}
