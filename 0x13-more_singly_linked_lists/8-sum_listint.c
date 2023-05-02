#include "lists.h"

/**
  * sum_listint - sum of all data in nodes
  * @head: head pointer
  * return: sum of data in nodes and 0 if node is empty
  */

int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);

}
