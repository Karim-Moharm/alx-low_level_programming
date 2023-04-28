#include "lists.h"

/**
  * _strlen - string length
  * @s: string
  * Return: number od char in string
  */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
  * print_list - prints all the elements of a list_t list
  * @h: pointer to struct
  * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	char *null = "(nil)";
	size_t count = 0;

	if (h->str == NULL)
		printf("[%d] %s\n", 0, null);
	else
	{
		while (h != NULL)
		{
			printf("[%d] %s\n", _strlen(h->str), h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}
