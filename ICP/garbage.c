#include<stdio.h>
#include<string.h>
void main()
{
    int i,k=0,l=0;
    char str[10];
    char new[10];
    char str1[10];
    char new1[10];
       printf("yo");
    for(i=0;i<10;i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0;i<10;i++)
    {
        scanf("%s",&str1[i]);
    }
    for(i=0;i<10;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {    printf("yes");
            if(str[i]>=97&&str[i]<=122)
            {   printf("yes");
                new[k]=str[i];
                k++;
            }
        }}
        for(i=0;i<10;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            if(str[i]>=97&&str[i]<=122)
            {
                new[l]=str[i];
                l++;
            }
        }
        if(new[10]==new1[10])
        {
            printf("Same");
        }
    }
}
