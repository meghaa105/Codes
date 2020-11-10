#include<stdio.h>
void main()
{
    int i,a,l,j,sum=0,place_val=1;
    printf("Enter a decimal number\n");
    scanf("%d",&l);
     j=l;a=l;
    while(a/2!=0)
    {
        j=a%2;
        a=a/2;

        sum=j*place_val+sum;
        place_val=place_val*10;

    }
    if(a%2!=0)
    {
        sum=1*place_val*1+sum;
    }
    printf("%d",sum);
}
