#include <stdio.h>
const int size;
void displayNumbers(int num[size][size],int);
int main()
{   printf("Enter the size of the array\n");
    scanf("%d",&size);
    int num[size][size], i, j;
    printf("Enter 4 numbers:\n");
    for (i = 0; i < size; ++i)
        for (j = 0; j < size; ++j)
            scanf("%d", &num[i][j]);

    // passing multi-dimensional array to a function
    displayNumbers(num,size);
    return 0;
}

void displayNumbers(int num[size][size],int n)
{
    int i, j;
    printf("Displaying:\n");
    for (i = 0; i < size; ++i)
{     for (j = 0; j < size; ++j)
          {
              printf("%d\t", num[i][j]);
          }
            printf("\n");

}
}
