#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free allocate memory.
 * @d: struct dog
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
