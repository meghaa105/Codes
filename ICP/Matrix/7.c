 //Write a C Program to Cyclically Permute the Elements of an Array.
#include<stdio.h>
void main()
{    int i;
     int arr[5]={1,2,3,4};
     arr[4]=arr[0];

      for(i=0;i<4;i++)
      {
          arr[i]=arr[i+1];

      }
      arr[3]=arr[4];
      for(i=0;i<4;i++)
      {
          printf("%d",arr[i]);
      }
}
