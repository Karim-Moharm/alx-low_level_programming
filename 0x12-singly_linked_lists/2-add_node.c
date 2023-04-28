#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to first node
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->len = _strlen(str);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
