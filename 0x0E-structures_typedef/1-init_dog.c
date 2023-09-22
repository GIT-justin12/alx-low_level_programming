#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: A dog structure.
 * @name: The name of the dog.
 * @age: the age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing.
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
