#include "main.h"
/**
*print_to_98 - prints all numbers from n to 98
*
*@n: arg
*
*Return: 0
*/
void print_to_98(int n)
{
		while (n <= 98)
		{
		_putchar(n);
			if (n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		n++;
		}
		while (n >= 98)
		{
		_putchar(n);
		}
			if (n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
	n--;
	if (n == 98)
	{
	_putchar(n);
	}
}
