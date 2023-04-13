#include "main.h"
#include <stdlib.h>

/**
  * _strlen - size of string
  * @str: string
  * Return: int
  */
int _strlen(char *str)
{
	int len = 0;
	while(len != '\0')
	{
		len++;
	}
	return (len);
}

/**
  * str_concat- function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: string
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int len_s1 = 0, len_s2 = 0;
	int i;
	
	/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	ptr = (char *)malloc((len_s1 + len_s2) + 1 * sizeof(char));

	/* The function should return NULL on failure */
	if (ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < len_s1 + len_s2; i++)
		{
			if (i < len_s1) /* still in first string */
				ptr[i] = s1[i];
			else /* end of sring 1 */
				ptr[i] = s2[i - len_s1];
		}
		ptr[i] = '\0';
		return (ptr);
	}
}

