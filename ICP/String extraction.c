// Write a program that extracts part of the given string from the specified position. For example, if the string is “Working with strings is fun”, then if from position 4, 4 characters are to be extracted then the program should return string as “king”. Moreover, if the positionfrom where the string is to be extracted is given and the number of characters to be extracted is 0 then the program should extract entiretring from the specified position.
#include<stdio.h>
#include<strings.h>

void main()
{
    int n,i;
    char str[]="Working with strings is fun";
    printf("Write the place where you want to start\n");
    int place;
    scanf("%d",&place);
    printf("Number of letters you want to extract\n");
    scanf("%d",&n);

    if(n!=0)
    {
        for(i=place-1;i<place+n;i++)
        {
            printf("%c",str[i]);
        }
    }
    if(n==0)
    {
        i=place-1;
        while(str[i]!=0)
        {
            printf("%c\n",str[i]);
            i++;
        }
    }
}
