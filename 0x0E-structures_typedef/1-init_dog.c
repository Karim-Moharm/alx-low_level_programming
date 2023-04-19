#include "dog.h"
#include <string.h>

/**
  * init_dog -  initialize a variable of type struct dog
  * @d: struct
  * @name: name of dog
  * @age: age
  * @owner: owner of the dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
