#include "lists.h"

/**
  * pop_listint - delete the head node
  * @head: pointer to pointer
  * Return: the deleted node's data
  */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = 0;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	/* or *head = temp->next */
	free(temp);
	temp = NULL;

	return (data);
}
