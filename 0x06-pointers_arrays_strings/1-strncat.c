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
	char *destin2 = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && *src < n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destin2);
}
