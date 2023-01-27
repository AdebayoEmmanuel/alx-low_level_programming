#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * sorted integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int i;

	if (array != NULL)
	{
		while (left <= right)
		{
			int mid = (int)(left + right) / 2;

			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(",");
			}
			printf("\n");
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
