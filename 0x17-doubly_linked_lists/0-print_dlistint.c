#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head pointer
 * Return: number of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *curr = NULL;

	curr = h;
	while (curr != NULL)
	{
		size++;
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	return (size);
}
