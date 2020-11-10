#include<stdio.h>
void main(){
    int n,m,n1,k,i,j;
    printf("Enter the row and col of first matrix :\n");
    scanf("%d%d",&n,&m);



    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&array[i][j]);
    }

    for (i = 0; i <n; i++)
{
    for (j = 0; j < m; j++)
        for (k=j+1;k<=m;k++)

    {
        if(array[i][j] > array[i][j+1])
        {
            int swap = array[i][j];
            array[i][j] = array[i][j+1];
            array[i][j+1] = swap;
        }
    }}

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d",array[i][j]);printf("\n");
    }


}
