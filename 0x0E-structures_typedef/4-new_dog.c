#include "dog.h"
#include <stdlib.h>

/**
  * _strcpy - copy string from source to destination
  * @dest: destination
  * @src: source
  * Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || owner == NULL)
		return (NULL);


	int len_name = 0, len_owner = 0;

	while(name[len_name])
		len_name++;

	while(owner[len_owner])
		len_owner++;

	


}
