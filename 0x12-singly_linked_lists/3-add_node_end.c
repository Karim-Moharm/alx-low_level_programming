#include <string.h>
#include "lists.h"

/**
  * add_node_end - add new node at the end
  * @head: head the point to first node
  * @str: string
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *newNode = NULL;
	list_t *temp = NULL;



	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;



	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
