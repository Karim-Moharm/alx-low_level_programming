#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: pointer to struct
  * Return: number of element in list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);

}

