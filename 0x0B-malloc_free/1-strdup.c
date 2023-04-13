#include "main.h"
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory
  * @str: string
  * Return: string
  */

char *_strdup(char *str)
{
	char *ptr = NULL;
	int i, j;
	int len;

	if (str == NULL)
		return (NULL);

	i = 0;
	len = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		j = 0;
		while (j < len)
		{
			ptr[j] = str[j];
			j++;
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
