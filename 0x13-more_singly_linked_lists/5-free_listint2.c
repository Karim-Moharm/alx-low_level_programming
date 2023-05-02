#include "lists.h"

/**
  * free_listint2 - free the list
  * @head: pointer to pointer
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr != NULL)
	{
		curr = curr->next;
		free(*head);
		*head = curr;
	}
}
