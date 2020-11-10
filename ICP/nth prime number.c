#include<stdio.h>
void main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    int k=1;
    if(num==1)
        printf("\n2");
    int flag=0;
    for(int i=3;;i++)
    {
        for(int j=2;j<=i;j++)
         {
    if(i%j==0)
        flag=1;
    if(flag==0)
        k++;

}    if(k==num)
{printf("%d",i);
break;}
}
}
