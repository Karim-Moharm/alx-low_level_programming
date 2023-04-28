#include "lists.h"

/**
  * free_list - free a list
  * @head: pointer to first node
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp = NULL;

	while (current != NULL)
	{
		temp = current;
		free (temp);
		current = current->next;
	}	
}
