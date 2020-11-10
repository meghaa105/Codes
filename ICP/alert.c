#include<stdio.h>

void main()
{
    float a=2.5,b=2.5;
    float c=b++/(a+b--);


    printf("%f\t%d",c,b);
}
