#include "main.h"

/**
  * _strncat - conacatination two strings
  * @dest: destinstion string
  * @src: source strign
  * @n: an input integer for src
  * Return: concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
}

