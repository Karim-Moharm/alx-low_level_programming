#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add nod at head of LL
 * @head: head poiner
 * @n: data of LL
 * Return: address of new node of NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;
	newNode->n = n;
	newNode->prev = NULL;
	if (*head == NULL)
	{
		/* indicates that there is no nodes */
		*head = newNode;
		return (newNode);
	}

	newNode->next = *head;
	newNode->next->prev = newNode;
	*head = newNode;
	return (newNode);
}
