#include "lists.h"

/**
  * print_listint - prints all element in linked list
  * @h: head which points to first node
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
