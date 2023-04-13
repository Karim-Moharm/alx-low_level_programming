#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - bidimensional array
 * @width: width
 * @height: heigth
 * Return: null pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
