#include <stdio.h>
#define SIZE 20
void checkIfExists(int b[], int index);
int main(void)
{
	int i;
	int numArray[SIZE] = { 0 };
	printf("Enter %d numbers: ", SIZE);

	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &numArray[i]);
	}
for(i=0;i<SIZE;i++)
{
   if(numArray[i]>=10 && numArray[i]<=100)
   {
		printf("You input: \n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", numArray[i]);
	}
	printf("\n");

	printf("The nonduplicate values are: \n");
	printf("%d ", numArray[0]);

	for (i = 1; i < SIZE; i++)
	{
		checkIfExists(numArray, i);
	}
    }
    else
    {
	printf("\n\nPlease input in range between 10 to 100 only ");
	break;
    }
   }
	return 0;
}

void checkIfExists(int b[], int index)
{
	int i, j, flag = 0;

	for (i = 0; i < index; i++)
	{
		if (b[index] == b[i])
		{
			return;
		}
	}
	printf("%d ", b[index]);
}
