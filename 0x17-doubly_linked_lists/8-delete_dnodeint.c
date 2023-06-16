#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: head pointer
 * @index: index of deleted node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	size_t list_len = 0;

	temp = *head;
	while (temp)
	{
		list_len++;
		temp = temp->next;
	}

	if (index >= list_len)
		return (-1);
	
	temp = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		temp = NULL;
		(*head)->prev = NULL;
		return (1);
	}
	while (index!= 0)
	{
		temp = temp->next;
		index--;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	temp = NULL;
	return (1);
}
