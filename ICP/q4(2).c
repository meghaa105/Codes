#include<stdio.h>
#include<strings.h>

int main()
{
    char line[150];
    char line1[150];
    int i, j;
    printf("Enter a string: ");
    gets(line);
    printf("Enter a string: ");
    gets(line1);

    strupr(line);
    strupr(line1);
    for(i = 0; line[i] != '\0'; ++i)
    {
        while (!( (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0') )
        {
            for(j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j+1];
            }
            line[j] = '\0';
        }
    }
     for(i = 0; line1[i] != '\0'; ++i)
    {
        while (!( (line1[i] >= 'A' && line1[i] <= 'Z') || line1[i] == '\0') )
        {
            for(j = i; line1[j] != '\0'; ++j)
            {
                line1[j] = line1[j+1];
            }
            line1[j] = '\0';
        }
    }
    puts(line);
    puts(line1);

    i=strcmp(line,line1);

    if(i==0)
        printf(" They are same\n");
    else
        printf(" They are not the same\n");


}
