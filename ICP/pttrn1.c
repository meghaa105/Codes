#include<stdio.h>
void main()
{
    int i,j,k,l;
    printf("Enter the number of rows and columns \n");
    scanf("%d%d",&k,&l);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=l;j++)
        {
            if( i>1 && i<5 && j>1 && j<5 )
            {
               printf("0");
            }
            else
            {
                 printf("1");
            }

        }printf("\n");
    }

}
