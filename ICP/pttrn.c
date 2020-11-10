#include<stdio.h>
void main()
{
    int i,j,k,a,b,c,d;
    printf("Enter the number of rows\n");
    printf("Enter the number of columns\n");
    scanf("%d%d",&a,&b);
    c=(a+1)/2;
    d=(b+1)/2;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(c==j || d==i)
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
