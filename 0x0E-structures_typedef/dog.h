#ifndef DOG_H
#define DOG_H

/**
  * struct dog - descripe a dog
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: the owner
  *
  * Description: Longer description
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
