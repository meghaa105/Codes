#include<stdio.h>
#include<conio.h>
void main()
{

    int arr[2][1];
    int i,j,total=0;


    printf("Enter the Numbers for the matrix\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<2;j++)
         {  scanf("%d",&arr[i][j]);

         }

    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<2;j++)
         {  printf("%d\t",&arr[i][j]);

         }
       printf("\n");
    }

return 0;
}
