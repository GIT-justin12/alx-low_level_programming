#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes.
 * @c: char to initialise
 * @size: number of bytes to allocate
 *
 * Return: A pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
