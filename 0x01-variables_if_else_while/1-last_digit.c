#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDig  = n % 10;
if (lastDig > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
}
else if (lastDig == 0)
{
	printf("Last digit of %d is  0\n", n);
}
else if (lastDig < 6 && lastDig != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
}
	return (0);
}
