#include<stdio.h>
void swap(int *,int *);

void main()
{
int*pointer_1;
int *pointer_2;

*pointer_1=1;
*pointer_2=2;

swap(&pointer_1,&pointer_2);
printf("yo");
printf("%d\t%d",*pointer_1,*pointer_2);
}



void swap(int *x,int *y)
{ int temp;
  temp=*x;
      *x=*y;
      *y=temp;

}

