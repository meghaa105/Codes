#include<stdio.h>
int size;
int middle;
int search(int arr[],int,int);
void main()
{    printf("Enter the size of array\n");
     scanf("%d",&size);
    int arr[size];
    int i,j;
     for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size-1;i++)   //sorting
    {
        for(j=0;j<size-1-i;j++)
         if(arr[j]>arr[j+1])
         {  int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

         }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
 // for(i=0;i<size;i++)
  //{
  //   if( arr[i]>0)
  //}


   int n=0;//searching
   int position=-1;
   while(position==-1)
   {position=search(arr,size,n);
    n++;}

    n=0;//searching
   int position1=-1;
   while(position==-1)
   {position=search(arr,size,n);
    n--;}

   int sum=0;
   int sum1=0;

    sum=arr[position]+arr[position+1];
    sum1=arr[position1]+arr[position1+1];

  if(sum>sum1)
    printf("The least sum is %d\n",sum1);
  if(sum<sum1)
  printf(" The sum is %d \t ",sum);
  if(sum==0||sum1==0)
    printf(" The least sum is %d",sum);



}




int search(int array[size],int s,int sea)
{

  int  first = 0;
  int last = s- 1;
  middle = (first+last)/2;

   while (first <= last)
    {
         if (array[middle] < sea)
         first = middle + 1;
         else if (array[middle] == sea)
         {return middle-1;
         break;

         }

      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
     return -1;
}
