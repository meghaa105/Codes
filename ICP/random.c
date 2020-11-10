#include<stdio.h>
void main()
{
 unsigned int arr[3][3]={2,4,6,9,1,10,16,64,5};
 int y=*(arr[0])|*(arr[2]);
 printf("%d",y);
}
