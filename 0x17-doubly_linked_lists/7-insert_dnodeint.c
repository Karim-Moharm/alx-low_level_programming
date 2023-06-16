#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert index at the any position
 * @h: head pointer
 * @idx: index
 * @n: data
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;
	unsigned int list_len = 0;

	if (!newNode)
	{
		return (NULL);
		free(newNode);
	}
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	temp = *h;
	while (temp)
	{
		list_len++;
		temp = temp->next;
	}
	if (idx >= list_len)
		return (NULL);

	/* in case of empty list */
	if (!h || !(*h))
	{
		*h = newNode;
		return (newNode);
	}

	/* in case of insertion at begin */
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	temp = *h;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}

	/* in case of insertion at end */
	if (!temp->next)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}

	temp->prev->next = newNode;
	newNode->prev = temp->prev;
	temp->prev = newNode;
	newNode->prev = temp;
	return (newNode);
}
