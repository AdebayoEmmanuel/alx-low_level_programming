#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - print elements in a list
 * @h: head node of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
			h = h->next;
			i++;
	}
	return (i);
}
