#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at certain position
  * @head: head pointer which points to head node
  * @idx: index of new node, index starts at 0
  * @n: data of new node
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	/* check if malloc succedded */
	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	idx--;
	while (idx != 0)
	{
		curr = curr->next;
		idx--;
	}
	/* while is false once curr is pointing to node before index of new node */
	newNode->next = curr->next;
	curr->next = newNode;
	
	return (newNode);
}
