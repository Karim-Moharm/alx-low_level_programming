#include "main.h"

/**
  * _strcmp - comparing two strings
  * @s1: first string
  * @s2: second string
  * Return: integer number
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
		s2++;

	if (s1 > s2)
		return (15);
	else if (s2 > s1)
		return (-15);
	else
		return (0);
}
