#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at certain index
  * @head: pointer to the head pointer
  * @index: index of node
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		curr = NULL;
		prev = NULL;
		return (1);
	}

	while (index != 0)
	{
		prev = curr;
		curr = curr->next;
		index--;
	}
	/* when while is false, curr pointing to deleted node and prev */
	/*   pointing to node before the deleted */
	prev->next = curr->next;
	free(curr);
	curr = NULL;
	return (1);
}
