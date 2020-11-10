#include<stdio.h>
void func(int);   //declaration of function
void (*fp)(int); //declaration of pointer
void main()
{ fp=func;
  (*fp)(10);
}

void func(int n)
{printf("%d",n);
}
