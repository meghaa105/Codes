#include<stdio.h>
void main()
{
    int arr[6]={1,2,3,4,5,6};
    int i,j=0,k=0;
    int new[6];
    int even[6];
    int odd[6];

    for(i=0;i<6;i++)
    {
        if(i%2==0)
        {
            new[i]=arr[i+1];
            even[j]=arr[i];
            j++;

        }
        if(i%2!=0)
        {
            new[i]=arr[i-1];
            odd[k]=arr[i];
            k++;

        }

    }

    for(i=0;i<6;i++)
    {
        printf("%d",new[i]);
    }
    printf("\n");
      for(j=0;j<3;j++)
    {
        printf("%d",even[j]);
    }
     printf("\n");
    for(k=0;k<3;k++)
    {
        printf("%d",odd[k]);
    }
   printf("\n");


}
