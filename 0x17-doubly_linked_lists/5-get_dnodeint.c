#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a LL
 * @head: head pointer
 * @index: index
 * Return: returns the nth node of a list or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	
	if (index >= dlistint_len(head))
		return (NULL);

	while(index != 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
