#include <stdio.h>
#include "search_algos.h"

/*
 * linear_search - takes array of size and finds value from it
 * @*array: array of integers
 * @size: size of array
 * @value: value to search
 * * Description: Does my stuff in O(n).
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array != NULL)
	{
		for (; i <= (int)size - 1; i++)
		{
			if (array[i] == value)
			{
				return (i);
			}
			if (array[i] != value)
			{
				printf("Value checked array[%i] = [%i]\n", i, array[i]);
			}
			if (i == (int)size)
			{
				return (-1);
			}
		}
	}
	return (-1);
}
