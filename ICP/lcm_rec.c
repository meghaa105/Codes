#include<stdio.h>
int lcm(int,int,int);
void main()
{
    int n1,n2,a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    a=lcm(n1,n2,1);
    printf("%d",a);
}

int lcm(int x,int y,int i)
{
    if(i%x==0 && i%y==0)
        return i;
    else
        return lcm(x,y,i++);
}
