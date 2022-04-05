#include "main.h"

/*
* print_triangle - prints a triangle of dimension 'size'
* @i : tracks new line printing
* @j : tracks # printing
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		_putchar('\n');
		for (j = 1; j < size; j++)
		{
			if (j >= size - i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
