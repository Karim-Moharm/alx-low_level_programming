#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns number of elements in a linked list
 * @h: head pointer
 * Return: num of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t size = 0;

	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return (size);
}
