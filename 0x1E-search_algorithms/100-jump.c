#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int start = 0;
	int current = step;
	int i;

	if (!array)
		return (-1);

	while (current < (int)size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);

		start = current;
		current += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, current);
	for (i = start; i < current && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
