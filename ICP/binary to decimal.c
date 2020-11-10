#include<stdio.h>
void main()
{
    int i=0,a,l,j,sum=0,place_val=1;
    printf("Enter a binary number\n");
    scanf("%d",&l);
     j=l;a=l;
    while(a/10!=0)
    {
        j=a%10;
        a=a/10;

        sum=j*pow(2,i)+sum;
        i++;

    }
     if(a%10!=0)
    {
        sum=1*pow(2,i)+sum;
    }
    printf("%d",sum);

}
