#include<stdio.h>
void main()
{
  int n1,n2,m1,m2,i,j,k;
  printf("Enter the number of rows and columns for the first matrix\nEnter the rows and columns for the second matrix\n");
  scanf("%d%d%d%d",&n1,&m1,&n2,&m2);
  int arr1[n1][m1];
  int arr2[n2][m2];
  int mult[n1][m2];


  for(i=0;i<n1;i++)
  {   for(j=0;j<m1;j++)
         {scanf("%d",&arr1[i][j]);}
   }

     for(i=0;i<n1;i++)
  {   for(j=0;j<m1;j++)
         {printf("%d\t",arr1[i][j]);}
   printf("\n");
  }

    for(i=0;i<n2;i++)
  {   for(j=0;j<m2;j++)
         {scanf("%d",&arr2[i][j]);}
   }




    for(i=0;i<n1;i++)
  {   for(j=0;j<m1;j++)
         {  mult[i][j]=0;
             for(k=0;k<m1;k++)
         {mult[i][j]=mult[i][j]+(arr1[i][k]*arr2[k][j]);}}
   }

      for(i=0;i<n1;i++)
  {   for(j=0;j<m1;j++)
         {printf("%d\t",mult[i][j]);}
   printf("\n");
}  }




