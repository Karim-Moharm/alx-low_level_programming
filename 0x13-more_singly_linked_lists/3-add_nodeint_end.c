#include "lists.h"

/**
  * add_nodeint_end - add new node at end
  * @head: pointer to pointer
  * @n: data to new node
  * Return: address of new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *curr = *head;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
		return (NULL);

	/* if there's no list the newNode will be the only node in the list */
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;

		curr->next = newNode;
	}
	return (newNode);
}

