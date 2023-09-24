#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Create a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);

		cutie_dog->name = malloc(sizeof(char) * name_l);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->ower == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}

	return (cutie_dog);
}

/**
 * _strlen - Returns the length of a string.
 * @s: String to count.
 *
 * Return: String length.
 */
int _strlen(char *s)
{
	int count = 0;
	for (; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}

/**
 * _strcpy - Copy a string.
 * @dest: Destination value.
 * @src: Source value.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
