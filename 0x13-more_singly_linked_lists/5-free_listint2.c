#include "lists.h"

/**
  * free_listint2 - free the list
  * @head: pointer to pointer
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp = NULL;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;

}
