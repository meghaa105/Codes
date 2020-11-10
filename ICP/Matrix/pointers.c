#include <stdio.h>

long *factorial(int *);

int main()
{
  int number;
  long fact = 1;
  int *d = NULL;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &number);

  d=factorial(&number);

  printf("%d! = %d\n", number, d);

  return 0;
}

long *factorial(int *n)
{
  int c;
  long result = 1;

  for (c = 1; c <= (*n); c++)
    result = result * c;

  return result;
}
