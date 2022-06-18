#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - gets number of elements in a list
 * @h: head node of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
