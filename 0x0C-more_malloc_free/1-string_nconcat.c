#include "main.h"
#include <stdlib.h>

/**
  * _strlen - return length of string
  * @str: string
  * Return: length of the string
  */
int _strlen(char *str)
{
	int i = 0;
	int len = 0;

	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
  *string_nconcat - concatenates two strings.
  * @s1: first string
  * @s2: second string
  * @n: index
  * Return: string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sizes1, sizes2;
	char *str;
	unsigned int i = 0;

	sizes1 = _strlen(s1);
	sizes2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= sizes2)
		n = sizes2;

	str = malloc(sizes1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (; i < sizes1 + n; i++)
	{
		if (i < sizes1)
		{
			str[i] = s1[i];
		}
		else
			str[i] = s2[i];
	}
	str[i] = '\0';
	return (str);
}
