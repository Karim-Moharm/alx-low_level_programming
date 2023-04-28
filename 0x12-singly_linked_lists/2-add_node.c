#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the head of a list(at beginnig)
 * @head: pointer to first node
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
