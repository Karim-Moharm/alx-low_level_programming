#include "lists.h"

/**
  * add_nodeint - func that add node at beginning of a list
  * @head: pointer to head pointer
  * @n: data of the new node
  * Return: address of new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
