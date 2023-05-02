#include "lists.h"

/**
  * free_listint - free the entire list
  * @head: head pointer
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		curr = curr->next;
		free(head);
		head = curr;
	}
}
