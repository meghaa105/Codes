#include<stdio.h>
void main(){
int n,m;
scanf("%d%d",&n,&m);
int a[n][m],b[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    scanf("%d",&a[i][j]);
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    scanf("%d",&b[i][j]);
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    printf("%d ",a[i][j]);
    printf("\n");
}

for(int i=0;i<n;i++)
{
//printf("lmao");
    for(int j=0;j<m;j++)
    printf("%d ",b[i][j]);
    printf("\n");
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    printf("%d \t",a[i][j]+b[i][j]);
    printf("\n");
}
}
