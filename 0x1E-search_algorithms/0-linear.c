#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
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
			printf("Value checked array[%i] = [%i]\n", i, array[i]);
		}
	}
	return (-1);
}
