#include "main.h"
/*
* print_diagonal - prints diagonal lines
*
* @i : tracker for new line
* @j : tracker for \
*
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
				_putchar('\n');
		}
	}


}
