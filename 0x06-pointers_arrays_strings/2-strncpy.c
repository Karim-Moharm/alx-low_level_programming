#include "main.h"
#include <stddef.h>
/**
  * _strncpy - function that copies a string.
  * @dest: string input
  * @src: struing input
  * @n: integer input
  * Return: destination pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
