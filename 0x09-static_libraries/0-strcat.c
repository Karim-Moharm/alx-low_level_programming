#include "main.h"
/**
  * _strcat - function that concatenates two strings
  * @dest : destination string
  * @src : source string
  * Return: concatenated sring
  */

char *_strcat(char *dest, char *src)
{
	char *destin2 = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (destin2);

}
