#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
