#include <stdio.h>
#include <math.h>
int convertDecimalToBinary(int n);

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %d in binary", n, convertDecimalToBinary(n));
    return 0;
}

int convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        if(remainder==1)
        {
            break;
        }
        binaryNumber += remainder*i;
        i *= 10;
    }
    return step;
}
