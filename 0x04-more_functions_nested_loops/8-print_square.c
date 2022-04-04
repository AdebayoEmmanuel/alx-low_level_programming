#include "main.h"
/*
* print_square - prints a square of dimension size x size
*
* @i : tracker for new line
* @j : tracker for # printing
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('\n');
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	}

}
