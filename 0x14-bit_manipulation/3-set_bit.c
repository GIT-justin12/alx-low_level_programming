#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1.
 * @n: pointer to the number to change.
 * @index: index of the bit to set to 1.
 *
 * Return: 1 for sucess, -1 for failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
