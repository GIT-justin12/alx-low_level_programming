#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers.
 * @min: first index.
 * @max: Last index.
 *
 * Return: An array of integers.
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}