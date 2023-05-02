#include "lists.h"

/**
  * free_listint - free the entire list
  * @head: head pointer
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *temp = NULL;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	head = NULL;
}
