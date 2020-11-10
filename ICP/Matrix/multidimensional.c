#include<stdio.h>
void main(){
    int n,m,n1,m1;
    printf("Enter the row and col of first matrix :");
    scanf("%d%d",&n,&m);
    printf("Enter the row and col of second matrix :");
    scanf("%d%d",&n1,&m1);
    int a[n][m],b[n1][m1],c[n][m1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {printf("%d",a[i][j]);}printf("\n");
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m1;j++)
        {
            c[i][j]=0;
            for(int k=0;k<m;k++)
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m1;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }

}
