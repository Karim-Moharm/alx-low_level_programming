#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: pointer to first node
  * @index: index of node (starting at 0)
  * Return: nth index or NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr = head;

	if (head == NULL)
		return (0);

	while (count != index)
	{
		count++;
		curr = curr->next;
	}
	return (curr);
}
