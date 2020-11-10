#include <stdio.h>
#include <math.h>
int convertDecimalToBinary(int n);

int main()
{
    int n,num,sum=0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    for(num=1;num<=n;num++)
    {sum=sum+convertDecimalToBinary(num);
    }
    printf("The sum is %d ", n,sum );
    return 0;
}

int convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
       // printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n =n/ 2;
        binaryNumber += remainder;
        i *= 10;


    }
    return binaryNumber;
}
