#include<stdio.h>
void main()
{
    int i,j,k=0,t,n,place_val=1;
    printf("Enter a number\n");
    scanf("%d",&n);t=n;
    while(t!=0)
    {
        j=t%10;
       k=k*10+j;
        t=t/10;
        place_val=place_val*10;}
    printf("%d\n",k);
    if(k==n)
    printf("It is a palindrome\n");
    if(k!=n)
    printf("Not a palindrome\n");
}
