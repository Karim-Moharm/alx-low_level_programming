#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head pointer, points to first node
 * @n: data
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (temp->next)
		temp = temp->next;
	
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
