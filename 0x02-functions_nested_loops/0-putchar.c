#include "main.h"
/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char _printchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int i;

	for (i = 0; i < sizeof(_printchar); i++)
{
	_putchar(_printchar[i]);
}
	_putchar('\n');

	return (0);
}
