#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free the entire list
 * @head: head pointer
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	if (!(head->next))
		free(head);
}
